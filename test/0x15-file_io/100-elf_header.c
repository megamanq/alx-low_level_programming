#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void validate_elf(unsigned char *e_ident);
void p_mag(unsigned char *e_ident);
void p_cl(unsigned char *e_ident);
void p_data(unsigned char *e_ident);
void p_vers(unsigned char *e_ident);
void p_abi(unsigned char *e_ident);
void p_osab(unsigned char *e_ident);
void p_type(unsigned int e_type, unsigned char *e_ident);
void p_entr(unsigned long int e_entry, unsigned char *e_ident);
void c_elfile(int elf);

/**
 * validate_elf - Validates if a file follows the ELF format.
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Description:
 * This function checks whether a given file adheres
 * to the ELF (Executable and Linkable Format) standards.
 * If the file is not recognized as an ELF file,
 * the program exits with error code 98.
 */

void validate_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * p_mag - Prints the magic numbers of an ELF header.
 * @e_ident: Pointer to an array holding the ELF magic numbers.
 *
 * Description:
 * This function prints the magic numbers from the provided ELF header array.
 * The magic numbers are separated by spaces in the output.
 */

void p_mag(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * p_cl - Prints the class of an ELF header.
 * @e_ident: Pointer to an array containing the ELF class.
 *
 * Description:
 * This function prints the ELF class value
 * from the provided array in the ELF header.
 * The ELF class indicates whether the ELF file is 32-bit or 64-bit.
 */

void p_cl(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * p_data - Prints the data encoding of an ELF header.
 * @e_ident: Pointer to an array containing the ELF data encoding.
 *
 * Description:
 * This function prints the data encoding value
 * from the provided array in the ELF header.
 * The data encoding specifies the endianness of
 * the ELF file's data representation.
 */

void p_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * p_vers - Prints the version of an ELF header.
 * @e_ident: Pointer to an array containing the ELF version.
 *
 * Description:
 * This function prints the version value from
 * the provided array in the ELF header.
 * The version indicates the version of the ELF file format being used.
 */

void p_vers(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * p_osab - Prints the OS/ABI of an ELF header.
 * @e_ident: Pointer to an array containing the ELF OS/ABI.
 *
 * Description:
 * This function prints the OS/ABI value from the
 * provided array in the ELF header.
 * The OS/ABI value identifies the operating system and ABI
 * (Application Binary Interface) for which the ELF file is intended.
 */

void p_osab(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * p_abi - Prints the ABI version of an ELF header.
 * @e_ident: Pointer to an array containing the ELF ABI version.
 *
 * Description:
 * This function prints the ABI (Application Binary Interface)
 * version value from the provided array in the ELF header.
 * The ABI version indicates the version of the ABI for
 * which the ELF file is compiled.
 */

void p_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * p_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: Pointer to an array containing the ELF class.
 *
 * Description:
 * This function prints the ELF type value provided as 'e_type'
 * along with the ELF class from the array in the ELF header.
 * The ELF type indicates the purpose and nature of the ELF file.
 */

void p_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * p_entr - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: Pointer to an array containing the ELF class.
 *
 * Description:
 * This function prints the entry point
 * address provided as 'e_entry' along
 * with the ELF class from the array in the ELF header.
 * The entry point is the memory address where
 * the execution of the ELF file begins.
 */

void p_entr(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * c_elfile - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description:
 * This function closes the ELF file associated with the
 * given file descriptor 'elf'.
 * If the file cannot be closed, the program exits with error code 98.
 */

void c_elfile(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 xhen success.
 *
 * Description:
 * This function processes an ELF file and displays the
 * information stored in its ELF header.
 * If the file is not recognized as an ELF file or the operation fails,
 * the program exits with error code 98.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *heder;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	heder = malloc(sizeof(Elf64_Ehdr));
	if (heder == NULL)
	{
		c_elfile(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, heder, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(heder);
		c_elfile(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	validate_elf(heder->e_ident);
	printf("ELF Header:\n");
	p_mag(heder->e_ident);
	p_cl(heder->e_ident);
	p_data(heder->e_ident);
	p_vers(heder->e_ident);
	p_osab(heder->e_ident);
	p_abi(heder->e_ident);
	p_type(heder->e_type, heder->e_ident);
	p_entr(heder->e_entry, heder->e_ident);

	free(heder);
	c_elfile(o);
	return (0);
}

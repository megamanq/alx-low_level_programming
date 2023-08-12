#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void validate_elf(unsigned char *elf_id);
void p_mag(unsigned char *elf_id);
void p_cl(unsigned char *elf_id);
void p_data(unsigned char *elf_id);
void p_vers(unsigned char *elf_id);
void p_abi(unsigned char *elf_id);
void p_osab(unsigned char *elf_id);
void p_type(unsigned int elf_type, unsigned char *elf_id);
void p_entr(unsigned long int elf_ent, unsigned char *elf_id);
void c_elfile(int elf);

/**
 * validate_elf - Validates if a file follows the ELF format.
 * @elf_id: Pointer to an array containing the ELF magic numbers.
 *
 * Description:
 * This function checks whether a given file adheres to the ELF (Executable and Linkable Format) standards.
 * If the file is not recognized as an ELF file, the program exits with error code 98.
 */

void validate_elf(unsigned char *elf_id)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_id[i] != 127 &&
		    elf_id[i] != 'E' &&
		    elf_id[i] != 'L' &&
		    elf_id[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * p_mag - Prints the magic numbers of an ELF header.
 * @elf_id: Pointer to an array holding the ELF magic numbers.
 *
 * Description:
 * This function prints the magic numbers from the provided ELF header array.
 * The magic numbers are separated by spaces in the output.
 */

void p_mag(unsigned char *elf_id)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_id[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * p_cl - Prints the class of an ELF header.
 * @elf_id: Pointer to an array containing the ELF class.
 *
 * Description:
 * This function prints the ELF class value from the provided array in the ELF header.
 * The ELF class indicates whether the ELF file is 32-bit or 64-bit.
 */

void p_cl(unsigned char *elf_id)
{
	printf("  Class:                             ");

	switch (elf_id[EI_CLASS])
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
		printf("<unknown: %x>\n", elf_id[EI_CLASS]);
	}
}

/**
 * p_data - Prints the data encoding of an ELF header.
 * @elf_id: Pointer to an array containing the ELF data encoding.
 *
 * Description:
 * This function prints the data encoding value from the provided array in the ELF header.
 * The data encoding specifies the endianness of the ELF file's data representation.
 */

void p_data(unsigned char *elf_id)
{
	printf("  Data:                              ");

	switch (elf_id[EI_DATA])
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
		printf("<unknown: %x>\n", elf_id[EI_CLASS]);
	}
}

/**
 * p_vers - Prints the version of an ELF header.
 * @elf_id: Pointer to an array containing the ELF version.
 *
 * Description:
 * This function prints the version value from the provided array in the ELF header.
 * The version indicates the version of the ELF file format being used.
 */

void p_vers(unsigned char *elf_id)
{
	printf("  Version:                           %d",
	       elf_id[EI_VERSION]);

	switch (elf_id[EI_VERSION])
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
 * @elf_id: Pointer to an array containing the ELF OS/ABI.
 *
 * Description:
 * This function prints the OS/ABI value from the provided array in the ELF header.
 * The OS/ABI value identifies the operating system and ABI (Application Binary Interface) for which the ELF file is intended.
 */

void p_osab(unsigned char *elf_id)
{
	printf("  OS/ABI:                            ");

	switch (elf_id[EI_OSABI])
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
		printf("<unknown: %x>\n", elf_id[EI_OSABI]);
	}
}

/**
 * p_abi - Prints the ABI version of an ELF header.
 * @elf_id: Pointer to an array containing the ELF ABI version.
 *
 * Description:
 * This function prints the ABI (Application Binary Interface) version value from the provided array in the ELF header.
 * The ABI version indicates the version of the ABI for which the ELF file is compiled.
 */

void p_abi(unsigned char *elf_id)
{
	printf("  ABI Version:                       %d\n",
	       elf_id[EI_ABIVERSION]);
}

/**
 * p_type - Prints the type of an ELF header.
 * @elf_type: The ELF type.
 * @elf_id: Pointer to an array containing the ELF class.
 *
 * Description:
 * This function prints the ELF type value provided as 'elf_type' along with the ELF class from the array in the ELF header.
 * The ELF type indicates the purpose and nature of the ELF file.
 */

void p_type(unsigned int elf_type, unsigned char *elf_id)
{
	if (elf_id[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("  Type:                              ");

	switch (elf_type)
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
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * p_entr - Prints the entry point of an ELF header.
 * @elf_ent: The address of the ELF entry point.
 * @elf_id: Pointer to an array containing the ELF class.
 *
 * Description:
 * This function prints the entry point address provided as 'elf_ent' along with the ELF class from the array in the ELF header.
 * The entry point is the memory address where the execution of the ELF file begins.
 */

void p_entr(unsigned long int elf_ent, unsigned char *elf_id)
{
	printf("  Entry point address:               ");

	if (elf_id[EI_DATA] == ELFDATA2MSB)
	{
		elf_ent = ((elf_ent << 8) & 0xFF00FF00) |
			  ((elf_ent >> 8) & 0xFF00FF);
		elf_ent = (elf_ent << 16) | (elf_ent >> 16);
	}

	if (elf_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_ent);

	else
		printf("%#lx\n", elf_ent);
}

/**
 * c_elfile - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description:
 * This function closes the ELF file associated with the given file descriptor 'elf'.
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
 * This function processes an ELF file and displays the information stored in its ELF header.
 * If the file is not recognized as an ELF file or the operation fails, the program exits with error code 98.
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

	validate_elf(heder->elf_id);
	printf("ELF Header:\n");
	p_mag(heder->elf_id);
	p_cl(heder->elf_id);
	p_data(heder->elf_id);
	p_vers(heder->elf_id);
	p_osab(heder->elf_id);
	p_abi(heder->elf_id);
	p_type(heder->elf_type, heder->elf_id);
	p_entr(heder->elf_ent, heder->elf_id);

	free(heder);
	c_elfile(o);
	return (0);
}

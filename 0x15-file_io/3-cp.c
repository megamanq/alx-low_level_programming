#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * copi - copy function
 * @fdsrc: fd src
 * @fddest: fd dest
 * @fnsrc: ffle name source
 * @fndest: file name dest
 * Return: no return
 */

void copi(int fdsrc, int fddest, char *fnsrc, char *fndest)
{
	int reads, writen;
	char buffer[1024];

	while ((reads = read(fdsrc, buffer, sizeof(buffer))) > 0)
	{
		writen = write(fddest, buffer, reads);
		if (writen == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", fndest);
			exit(99);
		}
	}

	if (reads == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", fnsrc);
		exit(98);
	}
}

/**
 * main - copy content of file to another
 * @ac: arg count
 * @av: arg values
 * Return: 0 on succed
 */

int main(int ac,  char **av)
{
	int file_src, file_dest, fc1, fc2;

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_src = open(av[1], O_RDONLY);
	if (file_src == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_dest = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_dest == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	copi(file_src, file_dest, av[1], av[2]);

	fc1 = close(file_src);
	if (fc1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_src);
		return (100);
	}

	fc2 = close(file_dest);
	if (fc2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_dest);
		return (100);
	}

	return (0);
}

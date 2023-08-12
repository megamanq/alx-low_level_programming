#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * copi - copy function
 * @file_src: fd src
 * @file_dest: fd dest
 * @filename_src: ffle name source
 * @filename_dest: file name dest
 * Return: no return
 */

void copi(int file_src, int file_dest, char *filename_src, char *filename_dest)
{
	int bytes_read, bytes_written;
	char buffer[1024];

	while ((bytes_read = read(file_src, buffer, 1024)) > 0)
	{
		bytes_written = write(file_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_dest);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename_src);
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_src = open(av[1], O_RDONLY);
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_dest = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	copi(file_src, file_dest, av[1], av[2]);

	fc1 = close(file_src);
	if (fc1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_src);
		return (100);
	}

	fc2 = close(file_dest);
	if (fc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_dest);
		return (100);
	}

	return (0);
}

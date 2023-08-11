#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * c_file - close file
 * @file; file descriptor
 * Return: no return
 */

void c_file(int file)
{
	if (close(file))
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %i\n", file);
		exit(100);
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
	int file_src, file_dest, reads, writen;
	char *buffer[1024];

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_src = open(av[1], O_RDONLY);
	reads = read(file_src, buffer, sizeof(buffer));
	if (file_src == -1 || reads == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_dest = open(av[2], O_WRONLY | O_APPEND | O_TRUNC | O_CREAT, 0664);
	if (file_dest == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while (reads > 0)
	{
		writen = write(file_dest, buffer, reads);
		if (writen == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		reads = read(file_src, buffer, sizeof(buffer));
	}

	c_file(file_src);
	c_file(file_dest);

	return (0);
}

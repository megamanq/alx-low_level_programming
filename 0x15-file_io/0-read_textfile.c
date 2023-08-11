#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: path to file
 * @letters: nbr of chars
 * Return: NULL or nbr of char printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reads, writen;
	int file;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(file);
		return (0);
	}

	reads = read(file, buffer, letters);
	if (reads <= 0)
	{
		free(buffer);
		close(file);
		return (0);
	}

	buffer[reads] = '\0';

	writen = write(STDOUT_FILENO, buffer, reads);
	if (writen != reads)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (writen);
}

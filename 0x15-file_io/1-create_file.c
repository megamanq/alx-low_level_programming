#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creat a file
 * @filename: fil pth
 * @text_content: cntnt to wr
 * Return: -1 if err or 1 if suc
 */

int create_file(const char *filename, char *text_content)
{
	int file, len;
	ssize_t writen;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;

		while (text_content[len])
		{
			len++;
		}

		writen = write(file, text_content, len);

		if (writen == -1)
		{
			close(file);
			return (-1);
		}
	}

	return (1);
}

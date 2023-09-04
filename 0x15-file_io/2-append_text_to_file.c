#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - appnd txt in
 * end of file
 * @filename: file pth
 * @text_content: txt to appn
 * Return: 1 on succ or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, writen, len;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		len = 0;

		while (text_content[len])
		{
			len++;
		}

		writen =  write(file, text_content, len);
		if (writen != len)
		{
			close(file);
			return (-1);
		}
	}

	return (1);
}

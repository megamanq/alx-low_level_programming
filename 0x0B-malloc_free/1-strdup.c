#include "main.h"
#include <stdlib.h>

/**
 * _strdup - func to copy string to
 * a newly allocated memory and rtrn it adress
 * @str: string to copy
 * Return: nul if fail, str is null. or pointer to new str
 */

char *_strdup(char *str)
{
	char *buffer;
	unsigned int i, size;

	if (!str)
	{
		return (0);
	}
	else
	{
		for (i = 0, size = 0; str[i]; i++)
		{
			size++;
		}

		buffer = malloc(sizeof(char) * (size + 1));

		if (!(buffer))
		{
			return (0);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				buffer[i] = str[i];
			}
			buffer[i] = '\0';
		}
	}
	return (buffer);
}

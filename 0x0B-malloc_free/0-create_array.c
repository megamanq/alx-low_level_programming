#include "main.h"
#include <stdlib.h>

/**
 * create_array - func to create array and
 * initialize it with specifuc char
 * @size: size of the array
 * @c: char
 * Return: nul if fail, size 0. or pointer to thearr
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	buffer = malloc(sizeof(char) * size);

	if (!(buffer) || size == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			buffer[i] = c;
		}
	}
	return (buffer);
}

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: numb of elements
 * @size: size of each member
 * Return: null if fail or args are 0,
 * ptr to memory if succed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buffer;
	unsigned int i;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);

	if (!buffer)
		return (NULL);

	ptr = buffer;
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (buffer);
}

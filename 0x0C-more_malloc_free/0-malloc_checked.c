#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: 98 if fail, ptr to memory if succed
 */

void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);

	if (!buffer)
	{
		exit(98);
	}

	return (buffer);
}

#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: old memory adress
 * @old_size: old size
 * @new_size: new size
 * Return: NULL or ptr to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *buffer;
	unsigned char *buff_ptr, *ptr_ptr;
	unsigned int i;

	if (new_size == old_size)
		return(ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		buffer = malloc(new_size);
		return (buffer);
	}

	buffer = malloc(new_size);

	if (!buffer)
		 return (NULL);

	buff_ptr = buffer;
	ptr_ptr = ptr;

	for (i = 0; i < new_size; i++)
	{
		if (ptr_ptr[i])
			buff_ptr[i] = ptr_ptr[i];
	}

	free(ptr);

	return (buffer);
}

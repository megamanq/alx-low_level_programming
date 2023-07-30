#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocate a memory block using malloc and free
 * @ptr: Pointer to the old memory block
 * @old_size: Old size in bytes of the allocated space for ptr
 * @new_size: New size in bytes of the new memory block
 * Return: Pointer to the new memory block or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *buffer;
	unsigned char *buff_ptr, *ptr_ptr;
	unsigned int i, cp_len;

	if (new_size == old_size)
		return (ptr);

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

	if (old_size < new_size)
		cp_len = old_size;
	else
		cp_len = new_size;

	buff_ptr = buffer;
	ptr_ptr = ptr;

	for (i = 0; i < cp_len; i++)
		buff_ptr[i] = ptr_ptr[i];

	free(ptr);
	return (buffer);
}

#include "main.h"

/**
 * set_bit - put bit in indx to 1
 * @n: ptr
 * @index: indx
 * Return: 1 in succ/ -1 in eror
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = *n | 1 << index;

	return (1);
}

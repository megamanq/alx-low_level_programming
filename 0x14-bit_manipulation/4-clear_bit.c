#include "main.h"

/**
 * clear_bit - put bit in indx to 0
 * @n: ptr
 * @index: indx
 * Return: 1 in succes / -1 in failing
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}

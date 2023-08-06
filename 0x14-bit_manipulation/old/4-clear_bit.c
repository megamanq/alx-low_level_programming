#include "main.h"

/**
 *clear_bit - set bit at index to 0
 *@n: ptr
 *@index: index
 *Return: 1 if success, -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}

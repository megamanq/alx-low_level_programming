#include "main.h"

/**
*set_bit - set bit at index to 1
*@n: ptr
*@index: index
*Return: 1 if succ, -1 if err
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = *n | 1 << index;

	return (1);
}

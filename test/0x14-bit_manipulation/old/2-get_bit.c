#include "main.h"

/**
 *get_bit - give bit at index
 *@n: unsign num
 *@index: ind bit
 *Return: bit or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;
	int i;

	if (index > 31)
		return (-1);

	if (n == 0 && index == 0)
	{
		i = 0;
		return (i);
	}

	for (count = 0; n; count++)
	{
		if (count == index)
		{
			i = n & 1;
			return (i);
		}
		n = n >> 1;
	}

	if (n == 0)
	{
		i = 0;
	}

	return (i);
}

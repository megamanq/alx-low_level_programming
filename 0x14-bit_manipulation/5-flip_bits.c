#include "main.h"

/**
 * flip_bits - count the num of diff bis
 * @n: frst num
 * @m: scnd num
 * Return: numb of diff bit
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int c;

	c = n ^ m;

	while (c)
	{
		count += c & 1;
		c = c >> 1;
	}

	return (count);
}

#include "main.h"

/**
 * flip_bits - calc num of dif bit
 * @n: first num
 * @m: secnd num
 * Return: numbr of dif bit
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

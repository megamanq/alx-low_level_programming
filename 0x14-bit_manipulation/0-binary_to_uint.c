#include "main.h"

/**
 * binary_to_uint - convert bin to unsign int
 * @b: ptr to str
 * Return: num / 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, leng;
	unsigned int sum = 0, mul;

	if (!b)
		return (0);

	for (leng = 0; b[leng]; leng++)
	{
		if (b[leng] != 48 && b[leng] != 49)
		return (0);
	}

	leng--;

	for (i = 0; b[i]; i++)
	{
		mul = 1;

		for (j = 1; j <= (leng - i); j++)
			mul = mul * 2;

		mul = mul * (b[i] - '0');
		sum = sum + mul;
	}

	return (sum);
}

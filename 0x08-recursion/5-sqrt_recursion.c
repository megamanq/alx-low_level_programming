#include "main.h"

/**
 * searchsqrt - search the square root
 * @a:int
 * @b:int
 * Return: int
 */

int searchsqrt(int a, int b)
{
	if ((a * a) > b)
		return (-1);

	if ((a * a) == b)
		return (a);

	return (searchsqrt((a + 1), b));
}

/**
 * _sqrt_recursion - main func , get the sqrt
 * @n :int
 * Return: sqrt root or -1 if error
 */
int _sqrt_recursion(int n)
{
	int a = 1;

	return (searchsqrt(a, n));
}

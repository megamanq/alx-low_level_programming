#include "main.h"
/**
 * validate - get square root
 * @a:int
 * @b:int
 * Return: int
 */
int validate(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (validate(a + 1, b));
}

/**
 * _sqrt_recursion - get natural square of int
 * @n: int to get sqr of
 * Return: sqr
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (validate(1, n));
}

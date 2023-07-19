#include "main.h"

/**
 * factorial - calc factorial of int
 * @n: integer to calculate
 * Return: result or -1 if error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}

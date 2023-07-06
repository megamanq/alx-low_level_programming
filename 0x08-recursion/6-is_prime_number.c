#include "main.h"
/**
 * validate - validate if prime
 * @a:int
 * @b:int
 * Return:int
 */
int validate(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (validate(a + 1, b));
}
/**
 * is_prime_number - get if nmbr is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (validate(2, n));
}

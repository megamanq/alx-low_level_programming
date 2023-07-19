#include "main.h"

int checkprime(int a, int n);

/**
 * is_prime_number - get if prime or not
 * @n: the int
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (checkprime(1, n));
}

/**
 * checkprime - check if the int is prime
 * @a:int
 * @n:int
 * Return: 1 if prime and 0 if not
 */

int checkprime(int a, int n)
{
	if (!(n % a))
	{
		if (a == n)
		{
			return (1);
		}
		else if (a != 1)
			return (0);
	}

	return (checkprime(a + 1, n));
}

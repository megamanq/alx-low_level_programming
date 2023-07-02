#include "main.h"
/**
 * swap_int - main function
 *
 * description: swap two ints
 * @a: pointer to an int
 * @b: pointer to an int
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

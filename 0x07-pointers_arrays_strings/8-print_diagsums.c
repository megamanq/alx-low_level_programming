#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of diags
 * @a: ptr array
 * @size: size of arr
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, sum_r = 0, sum_l = 0;

	for (i = 0; i < size; i++)
	{
		sum_r += *(a + ((i * size) + i));
	}

	for (i = 0; i < size; i++)
	{
		sum_l += *(a + ((i * size) + (size - i - 1)));
	}
	printf("%d, %d\n", sum_r, sum_l);
}

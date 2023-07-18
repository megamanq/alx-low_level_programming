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
	int i, j, sum_r = 0, sum_l = 0;

	for (i = 0; i < size; i++)
	{
		sum_r += *(a + (i * size + 1));
	}
	for (j = size - 1; j >= 0; j--)
	{
		sum_l += *(a + (j * size + (size - j - 1)));
	}
	printf("%d, %d\n", sum_r , sum_l);
}

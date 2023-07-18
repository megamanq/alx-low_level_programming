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
	int *b = a;

	for (i = 0; i < size; i++)
	{
		sum_r += b[i * size + 1];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum_l += b[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum_r , sum_l);
}

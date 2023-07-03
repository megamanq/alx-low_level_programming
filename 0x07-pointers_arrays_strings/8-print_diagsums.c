#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonal summ
 * @a: array
 * @size: size
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i;
	int c = 0;
	int b = 0;

	for (i = 0; i < size; i++)
	{
		c += a[(i * size) + i];
		b += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", c, b);
}

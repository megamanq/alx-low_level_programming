#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - main function
 *
 * description: print all numbers from n to 98
 * @n: is the start number
 *
 * Return: no return
 */
void print_to_98(int n)
{
	printf("%d", n);
	if (n < 98)
	{
		int i;

		for (i = ++n; i <= 98; i++)
		{
			printf(", %d", i);
		}
		printf("\n");
	}
	else
	{
		int i;

		for (i = --n; i >= 98; i--)
		{
			printf(", %d", i);
		}
		printf("\n");
	}
}

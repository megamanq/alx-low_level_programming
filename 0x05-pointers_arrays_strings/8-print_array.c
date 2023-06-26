#include "main.h"
#include <stdio.h>
/**
 * puts_half - lenght of string
 *
 * @a:integer
 * @n:integer
 *
 * return: no return
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

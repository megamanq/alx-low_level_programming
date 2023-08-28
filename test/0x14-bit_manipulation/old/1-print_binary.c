#include "main.h"

/**
* print_binary - print binary num of unsig long int
* @n: number
*/

void print_binary(unsigned long int n)
{

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
	}
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}

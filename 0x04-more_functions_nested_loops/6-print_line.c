#include "main.h"

/**
 * print_line - main function
 *
 * description: print a line
 * @n: is the number of how many long is the lin
 *
 * Return: no return
 */
void print_line(int n)
{
	int i = 0;

	while (i++ < n)
	{
		_putchar('_');
	}
	_putchar('\n');
}

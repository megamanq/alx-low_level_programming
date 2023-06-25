#include "main.h"

/**
 * print_diagonal - main function
 *
 * description: print a line
 * @n: is the number of how many long is the lin
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j++ < i)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');

}

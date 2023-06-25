#include "main.h"

/**
 * print_square - main function
 *
 * description: print a square
 * @size: is the number of the size of square
 *
 * Return: no return
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j++ < size)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');

}

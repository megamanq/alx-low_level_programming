#include "main.h"

/**
 * print_triangle - Prints triangles
 * @size: The size of the triangle
 *
 * Description: This function prints a triangle using the '#' character.
 * If the size is less than or equal to 0, it prints a newline character.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = 1;

			while (j <= size)
			{
				if (j < size - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}


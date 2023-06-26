#include "main.h"
/**
 * print_triangle - main function
 *
 * description: print triangles
 * @size: the size of the triangle
 *
 * Return : no return 
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = 1;

			while (j <= size)
			{
				if (j < size - i)
					_putchar(' ');
				else
					_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
} 

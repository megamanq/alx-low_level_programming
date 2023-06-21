#include "main.h"
/**
 * print_times_table - mmain fonction
 *
 * Description: times table function
 * @n: integer to return
 *
 * Return: no reutn
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int res = j * i;

				if (j == 0)
				{
					_putchar('0');
				} else if (res <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res);
				} else if (res > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (res / 100));
					_putchar('0' + ((res / 10) % 10));
					_putchar('0' + (res % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (res / 10));
					_putchar('0' + (res % 10));
				}
			}
			_putchar('\n');
		}
	}
}

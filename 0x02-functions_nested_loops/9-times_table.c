#include "main.h"
/**
 * times_table - main function
 *
 * Description: prints the 9 times table, starting with 0
 *
 * Return: no return
 */

void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (j == 0)
			{
				_putchar('0' + j);
				_putchar(',');
			}
			else if (j != 9 && ((res == 0  && j != 0) || (res < 10 && res != 0)))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
				_putchar(',');
			}
			else if (res >= 10)
			{
				_putchar(' ');
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
				if (j != 9)
					_putchar(',');
			}
			else if (res <= 10 && j == 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res % 10);
			}
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * times_table - main function
 *
 * Description: prints the 9times table
 *
 * Return: no return
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
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
				_putchar('0' + res);
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
		}
		_putchar('\n');
	}
}

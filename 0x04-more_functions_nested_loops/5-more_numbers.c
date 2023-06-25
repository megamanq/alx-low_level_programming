#include "main.h"
/**
 * more_numbers - main function
 *
 * description: print numbrs frm 0 to 14 10 times
 *
 * Return: no return
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
			j++;
		}
		_putchar ('\n');
		i++;
	}
}

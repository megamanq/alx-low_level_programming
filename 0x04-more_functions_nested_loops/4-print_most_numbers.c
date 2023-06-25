#include "main.h"
/**
 * print_most_numbers - main function
 *
 * description: print numbrs except 2 nd 4
 *
 * Return: no return
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar('0' + i);
		i++;
	}
	_putchar ('\n');
}

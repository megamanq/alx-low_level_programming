#include "main.h"
/**
 * print_number - print numbers
 * @n: nbr to print
 * Return: no return
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0' + n);
	}
	else
	{
		unsigned int temp;
		unsigned int diviser = 1;

		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		temp = n;

		while (temp / 10 != 0)
		{
			diviser *= 10;
			temp /= 10;
		}

		while (diviser != 0)
		{
			_putchar('0' + (n / diviser));
			n %= diviser;
			diviser /= 10;
		}
	}
}

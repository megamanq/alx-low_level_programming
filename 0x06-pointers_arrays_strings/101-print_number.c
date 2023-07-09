#include "main.h"
/**
 * print_number - print numbers
 * @n: nbr to print
 * Return: no return
 */
void print_number(int n)
{
	if (!n)
	{
		_putchar('0' + n);
	}
	else
	{
		unsigned int m, i;
		unsigned int div = 1;

		if (n < 0)
		{
			_putchar('-');
			n *= -1;
			m = n;
		}
		else
		{
			m = n;
		}
		while (m > 9)
		{
			div *= 10;
			m /= 10;
		}
		while (n)
		{
			i = n / div;
			n %= div;
			div /= 10;
			_putchar('0' + i);
		}
	}
}

#include "main.h"
/**
 * print_alphabet_x10 - function
 *
 * descriptio: this code prints the alphabet in lowrcase x10
 *
 * Return: no return void
 */

void print_alphabet_x10(void)
{
	int k = 0;

	while (k < 10)
	{
		char i;

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		 _putchar('\n');
	k++;
	}
}

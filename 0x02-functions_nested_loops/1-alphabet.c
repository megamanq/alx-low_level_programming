#include "main.h"
/**
 * print_alphabet - function
 *
 * descriptio: this code prints the alphabet in lowrcase
 *
 * Return: no return void
 */

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	 _putchar('\n');
}

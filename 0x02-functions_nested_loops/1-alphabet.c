#include "main.h"
/**
 * main - entry point
 *
 * descriptio: this code prints the alphabet in lowrcase
 *
 * Return: on success 0
 */
void print_alphabet(void)
{
	char i;
	for (i = 97 ;i <= 122 ; i++)
	{
		_putchar(i);
	}
	 _putchar('\n');
}

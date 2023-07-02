#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s:pointer charctere
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	x = i - 1;
	for (i = x; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

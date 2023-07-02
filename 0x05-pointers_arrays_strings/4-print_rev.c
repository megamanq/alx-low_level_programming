#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - main function
 *
 * description: print string in reverse
 * @s: pointer to a string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

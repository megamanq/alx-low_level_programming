#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - main function
 *
 * description: print halp of string
 * @str: pointer to a string
 *
 * Return: no return
 */
void puts_half(char *str)
{
	int i;

	for (i = (_strlen(str) / 2); i <= (_strlen(str) - 1); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

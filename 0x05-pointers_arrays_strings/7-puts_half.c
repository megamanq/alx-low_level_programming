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

	if ((_strlen(str) % 2) != 0)
		i = ((_strlen(str) + 1) / 2);
	else
		i = (_strlen(str) / 2);
	for (; i <= (_strlen(str) - 1); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

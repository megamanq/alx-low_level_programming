#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - main function
 *
 * description: print every other char
 * @str: pointer to a string
 *
 * Return: no return
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= (_strlen(str) - 1); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

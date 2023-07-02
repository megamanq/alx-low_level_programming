#include "main.h"
/**
 * puts2 - print other character of string
 *
 * @str: pointer caracter
 *
 * return: no return
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}

#include "holberton.h"
/**
 * _puts - put string
 *
 * @str: pointer caracter
 *
 * return: no return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return;
}

#include "main.h"
/**
 * puts_half - lenght of string
 *
 * @str: pointer caracter
 *
 * return: no return
 */
void puts_half(char *str)
{
	int x = 0, i;

	while (str[x] != '\0')
		x++;
	if (x + 1 % 2 != '0')
		i = (x - 1) / 2;
	else
		i = (x / 2);
	i++;

	for (x = i; str[x] != '\0'; x++)
	_putchar(str[x]);
	_putchar('\n');
}

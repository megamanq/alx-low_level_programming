#include "main.h"
/**
 * _puts - main function
 *
 * description: take a pointer as prm and update its value
 * @n: pointer to an int
 *
 * Return: no return
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * _puts_recursion - print str
 * @s: str to print
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

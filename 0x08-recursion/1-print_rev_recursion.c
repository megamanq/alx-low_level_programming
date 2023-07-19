#include "main.h"
/**
 * _print_rev_recursion - print str reverse
 * @s: str to print
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

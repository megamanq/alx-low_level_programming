#include "main.h"
/**
  * _puts_recursion - prnt string
  * @s: str to prnt
  *
  * Return: nor return
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}

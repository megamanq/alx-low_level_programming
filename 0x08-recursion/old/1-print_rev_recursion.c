#include "main.h"
/**
  * _print_rev_recursion - prnt str reverse
  *
  * @s: str to rvrse
  *
  * Return: no return
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prin name
 * @name: str
 * @f: func
 * Return: no retunr
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - print charecter
 * @str: arg
 * Return: no return
 */

void print_c(va_list str)
{
	printf("%c", va_arg(str, int));
}

/**
 * print_str - print strings
 * @str: arg
 * Return: no return
 */

void print_str(va_list str)
{
	char *x;

	x = va_arg(str, char*);

	if (x == NULL)
		x = "(nil)";

	printf("%s", x);
}

/**
 * print_int - print integers
 * @str: arg
 * Return: no return
 */

void print_int(va_list str)
{
	printf("%d", va_arg(str, int));
}

/**
 * print_f - print floats
 * @str: arg
 * Return: no return
 */

void print_f(va_list str)
{
	printf("%f", va_arg(str, double));
}

/**
 * print_all - print everything
 * @format: list of types
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	t_prin f[] = {
		{"c", print_c},
		{"s", print_str},
		{"i", print_int},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list args;
	char *sep = "";

	va_start(args, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;

		while (f[j].y)
		{
			if (*(f[j].y) == format[i])
			{
				printf("%s", sep);
				f[j].func(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

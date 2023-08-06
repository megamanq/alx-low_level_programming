#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - ptint strings
 * @separator: separator
 * @n: constant
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	str = va_arg(args, char *);

	for (i = 0; i < n; i++)
	{
		if (!str)
		{
			printf("(nil)");
		}
		else
		{
			pprintf("%s", str);
		}

		if (separator && i + 1 != n)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

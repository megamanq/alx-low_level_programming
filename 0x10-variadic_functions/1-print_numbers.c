#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - ptint numbrs
 * @separator: separator
 * @n: constant
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i + 1 != n)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

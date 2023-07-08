#include "main.h"
/**
 * string_toupper - convert lower case to upper
 * @x: string
 * Return: the upper string
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] <= 122 && x[i] >= 97)
		{
			x[i] = x[i] - 32;
		}
		i++;
	}
	return (x);
}

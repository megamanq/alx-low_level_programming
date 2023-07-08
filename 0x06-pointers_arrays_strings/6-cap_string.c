#include "main.h"
/**
 * cap_string - capitalise each word
 * @x: string to capitalize
 * Return: capitalized x
 */
char *cap_string(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] == ' ' || x[i] == '\t' || x[i] == '\n' ||
		    x[i] == ',' || x[i] == ';' || x[i] == '.' ||
		    x[i] == '!' || x[i] == '?' || x[i] == '"' ||
		    x[i] == '(' || x[i] == ')' || x[i] == '{' || x[i] == '}')
		{
			if (x[i + 1] <= 122 && x[i + 1 ] >= 97)
			{
				x[i + 1] = (x[i + 1] - 32);
			}
		}
		i++;
	}
	return (x);
}

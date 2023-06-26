#include "main.h"
/**
 * rev_string - reverse a string
 * 
 * @s: char to print
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int n = 0, i, x;
	char d;

	while (s[n] != '\0')
	{
		n++;
	}
	x = n - 1;
	for (i = 0; x >= 0 && i < x; x--, i++)
	{
		d = s[i];
		s[i] = s[x];
		s[x] = d;
	}
}

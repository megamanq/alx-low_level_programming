#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - main function
 *
 * description: reverse a strng
 * @s: pointer to a string
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int i, j;
	char d;

	for (i = 0, j = (_strlen(s) - 1); i <= j; i++, j--)
	{
		d = s[i];
		s[i] = s[j];
		s[j] = d;
	}
}

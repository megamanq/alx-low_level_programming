#include "main.h"

int checkpal(char *s, int len, int strt)
{
	if (*s[strt] != *s[len])
	{
		return (0);
	}
	if (strt == len || (strt - len) == 1)
		return (1);

	return (checkpal(s, len - 1, strt + 1));
}

/**
 * is_palindrome - get if str is palindrome
 * @s: str to checks
 * Return: 1 if success and 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int a = 0;

	if (!(*s))
	{
		return (1);
	}

	while (*s)
	{
		i++;
		s++;
	}

	return (checkpal(s, i, a));
}

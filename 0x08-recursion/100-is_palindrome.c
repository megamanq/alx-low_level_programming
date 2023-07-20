#include "main.h"

/**
 * strleng - get str lenght
 * @s: string
 * Return: lenght
 */

int strleng(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + strleng(s + 1));
	}
	return (0);
}

/**
 * ispal - check if it is pal
 * @s: string
 * @strt: first inex
 * @len: last index
 * Return: 1 if pal and 0 if not
 */

int ispal(char *s, int strt, int len)
{
	if (s[strt] == s[len])
	{
		if (strt > len / 2)
			return (1);
		else
			return (ispal(s, (strt + 1), (len - 1)));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check if is palindrome
 * @s: string
 * Return: 1 if pal , 0 if not
 */

int is_palindrome(char *s)
{
	int len = strleng(s) - 1;

	return (ispal(s, 0, len));
}

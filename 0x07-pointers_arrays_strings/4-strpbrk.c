#include "main.h"
/**
 * _strpbrk - search and locat str
 * @s: string to trait
 * @accept: segment to search
 *
 *Return: lenght
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

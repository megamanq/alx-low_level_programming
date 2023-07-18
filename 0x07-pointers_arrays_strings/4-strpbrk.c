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
	int i = 0;

	while (accept[i])
	{
		int j;

		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (0);
}

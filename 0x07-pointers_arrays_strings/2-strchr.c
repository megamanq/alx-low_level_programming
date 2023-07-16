#include "main.h"
/**
 * _strchr - locate characters
 * @s: string to locat in
 * @c: char to locat
 *
 * Return: ptr to first occurance of c
 * or null if char not found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0;  s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
	}

	return (0);
}

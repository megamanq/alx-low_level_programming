#include "main.h"
/**
 * _strchr - get char in string
 *
 * @s: string
 * @c: char
 *
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}

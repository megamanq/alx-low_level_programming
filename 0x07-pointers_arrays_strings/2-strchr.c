#include "main.h"
/**
 * _strchr - get char in string
 * @s:string
 * @c:char
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

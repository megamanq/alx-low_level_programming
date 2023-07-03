#include "main.h"
/**
 * _memset - main function
 *
 * description: fill with const byte
 * @s:char
 * @b:char
 * @n:unsigned int
 *
 * Return: return s on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

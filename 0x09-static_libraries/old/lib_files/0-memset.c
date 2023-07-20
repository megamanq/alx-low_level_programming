#include "main.h"

/**
 * *_memset - fill mem
 * @s: mem adre
 * @b: char
 * @n: num of times to cp
 *
 * Return: pointer to mem adr
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

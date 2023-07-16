#include "main.h"
/**
 * _memset - fill memory by a constant byte
 * @s: memory area to fill
 * @b: constant byte
 * @n: bytes to fill
 *
 * Return: ptr to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

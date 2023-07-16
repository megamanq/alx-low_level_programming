#include "main.h"
/**
 * _memcpy - copy mem area
 * @dest: dest memory area
 * @src: source mem area
 * @n: bytes  to copy
 *
 * Return: ptr to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

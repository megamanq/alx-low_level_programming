#include "main.h"
/**
 * _strncat - concatenate 2 str with n nbr of chars
 *
 * @dest: pntr to char
 * @src: pntr to char
 * @n: nbr of chars to add
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, b = 0;

	while (dest[b])
	{
		b++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[b] = src[i];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

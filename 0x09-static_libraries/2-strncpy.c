#include "main.h"
/**
 * _strncpy - cpy str n char frm src to dest
 *
 * @dest: pntr to char
 * @src: pntr to char
 * @n: nbr of chars
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

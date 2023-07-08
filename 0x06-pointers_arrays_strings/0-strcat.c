#include "main.h"
/**
 * _strcat - concatenate 2 str
 *
 * @dest: pntr to char
 * @src: pntr to char
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, b = 0;

	while (dest[b])
	{
		b++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[b] = src[i];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

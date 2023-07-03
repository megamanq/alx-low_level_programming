#include "main.h"
/**
 * _memcpy - main function
 * 
 * description: copie frm memry src to memry dest
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: dest on succeed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

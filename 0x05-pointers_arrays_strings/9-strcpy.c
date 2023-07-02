#include "main.h"
/**
 * _strcpy - main function
 *
 * description: copie str to buffer
 * @dest: pointer to destinato
 * @src: pointer to string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

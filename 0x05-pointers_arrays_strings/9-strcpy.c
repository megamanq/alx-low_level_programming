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
	int i;
	
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strlen - main function
 *
 * description: return lenght of string
 * @s: pointer to string
 *
 * Return: lenth of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

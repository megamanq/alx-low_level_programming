#include "main.h"
/**
 * _strlen - main function
 *
 * Description: get the length of string
 * @s: chars to check
 *
 * Return: 0 in success
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}

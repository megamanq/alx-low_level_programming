#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: secnd string
 * Return: ptr to new concatinated str
 * or 0 on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *buffer;
	unsigned int i, j, len1, len2, len;

	if (!s1)
		s1 = "";
	else if (!s2)
		s2 = "";

	for (i = 0, len1 = 0; s1[i]; i++)
		len1++;

	for (i = 0, len2 = 0; s2[i]; i++)
		len2++;

	len = len1 + len2;
	buffer = malloc (sizeof(char) * (len + 1));
	i = j = 0;

	if (buffer == NULL)
	{
		return (NULL);
	}

	while (s1[i])
	{
		buffer[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		buffer[i] = s2[j];
		i++;
		j++;
	}
	
	buffer[i] = '\0';

	return (buffer);
}

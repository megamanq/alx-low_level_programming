#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes
 * Return: null  if fail, ptr to memory if succed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	unsigned int len1, len2, i, j, all_len;

	len1 = len2 = i = j = 0;

	while(s1[len1])
	{
		len1++;
	}

	while (s2[len2])
	{
		len2++;
	}

	if (n >= len2)
	{
		all_len = len1 + len2;
	}
	else
	{
		all_len = len1 + n;
	}

	buffer = malloc(sizeof(char) * (all_len + 1));

	if (!buffer)
	{
		return(NULL);
	}

	for (i = 0; i < len1; i++)
	{
		if (s1 == NULL)
			buffer[i] = "";
		else
			buffer[i] = s1[i];
	}

	for (j = 0; i < all_len; j++)
	{
		if (s2 = NULL)
			buffer[i] = "";
		else
			buffer[i++] = s2[j];
	}

	buffer[i] = '\0';

	return (buffer);
}

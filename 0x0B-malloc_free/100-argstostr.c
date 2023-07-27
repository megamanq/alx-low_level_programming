#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all args
 * @ac: count
 * @av: arg values
 * Return: pointer to new string or null if fails
 */

char *argstostr(int ac, char **av)
{
	char *buffer;
	int i, j, buf_ind, len;

	if (ac == 0 || *av == NULL)
	{
		return (NULL);
	}

	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}

		len++;
	}

	buffer = (char *)malloc(sizeof(char) * (len + 1));

	if (!buffer)
	{
		return (NULL);
	}

	buffer[0] = '\0';
	buf_ind = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			buffer[buf_ind++] = av[i][j];
		}

		buffer[buf_ind++] = '\n';
	}
	buffer[buf_ind] = '\0';

	return (buffer);
}

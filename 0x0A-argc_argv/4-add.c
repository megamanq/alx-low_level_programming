#include <stdio.h>
#include "main.h"
#include "100-atoi.c"

/**
 * main - add two numbrs
 * @argc: argument count
 * @argv: array of potr to char arguments
 * Return: 0 on sucess, 1 on failure
 */

int main(int argc, char *argv[])
{
	int j, i, res;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	res = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		res += _atoi(argv[i]);
	}

	printf("%d\n", res);
	return (0);
}

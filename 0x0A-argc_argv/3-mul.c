#include <stdio.h>
#include "main.h"
#include "100-atoi.c"

/**
 * main - multiply two args
 * @argc: argument count
 * @argv: array of potr to char arguments
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}

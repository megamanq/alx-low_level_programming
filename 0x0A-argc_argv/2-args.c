#include <stdio.h>

/**
 * main - print the args
 * @argc: argument count
 * @argv: array of potr to char arguments
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

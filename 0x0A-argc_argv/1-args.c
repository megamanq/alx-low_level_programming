#include <stdio.h>

/**
 * main - print the numb of args
 * @argc: argument count
 * @argv: array of potr to char arguments
 * Return: 0 on sucess
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

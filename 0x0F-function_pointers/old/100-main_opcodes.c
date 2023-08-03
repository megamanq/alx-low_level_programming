#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prnt opcodes of prgrm
 * @a: addr main function
 * @n: num of bytes to prnt
 * Return: no return
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prnt the opcodes own main func
 * @argc: num of arg passd to the funct
 * @argv: arr of ptr to arg
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}

#include <stdio.h>
/**
 * main - print num of arg
 * @argc:int
 * @argv:str
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{

		printf("%d\n", argc - 1);

	return (0);
}

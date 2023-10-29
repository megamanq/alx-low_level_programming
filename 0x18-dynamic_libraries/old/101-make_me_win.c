#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int (*real_main)(int, char **) = dlsym(RTLD_NEXT, "main");
	printf("Please make me win!\n");
	return 0;
}

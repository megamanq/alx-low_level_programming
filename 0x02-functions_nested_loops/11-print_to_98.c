#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main function
 *
 * Description: print to 98
 *@i:integer
 *
 * Return: no return
 */
void print_to_98(int i)
{
	while (i != 98)
	{
		printf("%i, ", i);
		if (i > 98)
			i--;
		else
			i++;
	}
	printf("98\n");
}

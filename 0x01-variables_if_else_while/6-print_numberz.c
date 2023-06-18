#include <stdio.h>
/**
 * main - entry point
 *
 * description: print all singl numbr on base 10 char methd
 *
 * Return: 0 when succeed
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

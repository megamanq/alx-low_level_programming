#include <stdio.h>
/**
 * main - entry point
 *
 * description: print all singl numbr on base 16 char methd
 *
 * Return: 0 when succeed
 */
int main(void)
{
	char a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	a = 'a';
	for (i = 0; i < 6; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

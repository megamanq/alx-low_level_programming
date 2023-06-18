#include <stdio.h>
/**
 * main - entry point
 *
 * description: print alphabet in reverse
 *
 * Return: always 0 on succ
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

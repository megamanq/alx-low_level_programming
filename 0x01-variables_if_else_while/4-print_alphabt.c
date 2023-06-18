#include <stdio.h>
/**
 * main - entry point
 *
 * description: print all alfabet lower \q and e
 *
 * Return: is always 0 when succeed
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

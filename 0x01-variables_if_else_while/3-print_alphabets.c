#include <stdio.h>
/**
 * main - entry point
 *
 * descripion: this code prints all alphabets
 *
 * Return: is always 0 on succeed
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

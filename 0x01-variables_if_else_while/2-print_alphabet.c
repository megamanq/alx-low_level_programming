#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this code is print amphabey
 *
 * Return: always 0 on succeed
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

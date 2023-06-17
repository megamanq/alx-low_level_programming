#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this code is print alphabet in reverse
 *
 * Return: always 0 on succeed
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}

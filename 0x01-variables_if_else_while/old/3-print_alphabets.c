#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this code is print amphabets upper and lower
 *
 * Return: always 0 on succeed
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

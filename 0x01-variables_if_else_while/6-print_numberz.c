#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this code is print numberz
 *
 * Return: always 0 on succeed
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this code is print anumbers
 *
 * Return: always 0 on succeed
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}

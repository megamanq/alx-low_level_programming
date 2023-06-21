#include<stdio.h>
/**
 * main - main function
 *
 *Description: first 50 fibonatchi
 *
 * Return: no return
 */

int main(void)
{
	long int a, b, c, i;

	a = 1;
	b = 2;
	c = 3;
	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 3; i < 50; i++)
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", c);

	return (0);
}

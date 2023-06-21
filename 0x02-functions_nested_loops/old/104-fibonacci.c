#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *
 * Return: no return
 */
int main(void)
{
	unsigned long int i, a, b, j, c, d, e, f, g, h, k;

	i = 1;
	j = 2;
	e = i + j;

	printf("%lu, ", i);
	printf("%lu, ", j);
	for (h = 3; h < 89; h++)
	{
		printf("%lu, ", e);
		i = j;
		j = e;
		e = i + j;
	}
	c = j / 1000000000;
	d = j % 1000000000;
	f = e / 1000000000;
	g = e % 1000000000;
	for (k = 89; k < 98; k++)
	{
		printf("%lu%lu, ", f, g);
		a = c;
		b = d;
		c = f;
		d = g;
		f = a + c + ((b + d) / 1000000000);
		g = (b + d) % 1000000000;
	}
printf("%lu%lu\n", f, g);
	return (0);
}

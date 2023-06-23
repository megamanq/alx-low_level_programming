#include <stdio.h>
/**
 * main - entry point
 *
 * description: print first 50 fibonacci
 *
 * Return: 0 on terminate
 */
int main(void)
{
	int i;
	unsigned int sum = 0;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int res = 0;

	for (i = 1; i <= 50; i++)
	{
		res = a + b;
		a = b;
		b = res;
		if (res < 4000000 && !(res % 2))
		{
			sum += res;
		}

	}
	printf("%d\n", sum);
	return (0);
}

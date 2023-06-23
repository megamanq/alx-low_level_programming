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
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int res = 0;

	for (i = 1; i <= 50; i++)
	{
		res = a + b;
		a = b;
		b = res;
		if (i != 50)
		{
		printf("%lu, ", res);
		}
		else
			printf("%lu", res);

	}
	printf("\n");
	return (0);
}

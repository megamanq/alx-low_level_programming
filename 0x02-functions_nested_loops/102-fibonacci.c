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
	int a = 0;
	int b = 1;
	unsigned long long int res = 0;

	for (i = 1; i <= 50; i++)
	{
		res = a + b;
		a = b;
		b = res;
		printf("%llu, ", res);

	}
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * description: sum of all multiples of 3 an 5
 *
 * Return: 0 when terminate program
 */
int main(void)
{
	int i;
	int res = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (!(i % 3) || !(i % 5))
		{
			res += i;
		}
	}
	printf("%d\n", res);
	return (0);
}

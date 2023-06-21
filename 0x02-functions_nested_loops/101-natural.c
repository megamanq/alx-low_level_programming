#include <stdio.h>
/**
 * main - main function
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: always 0 in succeed
 */

int main(void)
{
	int a;
	int b = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}

	}
	printf("%d\n", b);
	return (0);
}

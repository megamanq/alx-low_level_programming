#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the biz fizz test
 *
 * Return: always (0) on exit
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (!(i % 3) && !(i % 5))
		{
			printf("FizzBuzz");
		}
		else if (!(i % 3))
		{
			printf("Fizz");
		}
		else if (!(i % 5))
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * description: fizz buzz test
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i != 1)
		{
			printf(" ");
		}
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
		i++;
	}
	printf("\n");
	return (0);
}

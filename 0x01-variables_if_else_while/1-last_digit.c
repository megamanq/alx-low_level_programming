#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * description: catche the last digit of n and write a message
 *
 * Return: is always 0 on succeed
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = (n % 10);

	printf("Last digit of %d", n);
	puts(" is");
	if (last_digit < 5)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	else if (last_digit == 0)
	{
		 printf("%d and is 0\n", n); 
	}
	else
	{
		 printf("%d and is greater than 5\n", n);
	}
	return (0);
}

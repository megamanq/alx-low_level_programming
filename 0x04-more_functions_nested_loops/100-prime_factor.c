#include <stdio.h>
/**
 * main - entry point
 *
 * Description : find and print largest prime factor
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int i = 2;

	while (i != num)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", num);
	return (0);
}

#include <stdio.h>
/**
 * print_times_table - print table n times
 *
 * @n: data entry
 *
 * Return: no return
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i;
		int j;
		int res;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
				{
					printf("%d", res);
				}
				else if (res < 10)
				{
					printf(",   %d", res);
				}
				else if (res < 100)
				{
					printf(",  %d", res);
				}
				else
				{
					printf(", %d", res);
				}
			}
			printf("\n");
		}
	}
}

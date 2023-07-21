#include <stdio.h>
#include "main.h"
#include "100-atoi.c"

/**
 * main - give min change of money
 * @argc: argument count
 * @argv: array of potr to char arguments
 * Return: 0 on sucess, 1 on failure
 */

int main(int argc, char *argv[])
{
	int  i, amount, coin_num;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = _atoi(argv[1]);

		if (amount < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
	}

	coin_num = 0;

	for (i = 0; i < 5; i++)
	{
		while (amount / coins[i])
		{
			coin_num += amount / coins[i];
			amount = amount % coins[i];
		}
	}

	printf("%d\n", coin_num);

	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * description: combo print of two digit nms
 *
 * Return: alway returns 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		j = i + 1;
		for (; j < 10; j++)
		{
			k = j + 1;
			for (; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (k != 9 || j != 8 || i != 7)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

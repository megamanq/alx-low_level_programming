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

	for (i = 0; i < 10; i++)
	{
		j = i + 1;
		for (; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (j != 9 || i != 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

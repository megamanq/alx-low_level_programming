#include <stdio.h>
/**
 * main - entry point
 *
 * Description: sum even valued terms
 *
 * Return: no return
 */
int main(void)
{
	unsigned int i, j, k, l, m;

	i = 1;
	j = 2;
	k = 2;
	l = 3;
	for (m = 2; m <= 32; m++)
	{
		if (l % 2 == 0)
			k = k + l;
		i = j;
		j = l;
		l = i + j;
	}
	printf("%u\n", k);
	return (0);
}

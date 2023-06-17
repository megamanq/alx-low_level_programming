#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this code is print amphabets except  q and e
 *
 * Return: always 0 on succeed
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}

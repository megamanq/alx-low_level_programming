#include "main.h"
/**
 * jack_bauer -  main function
 *
 * Description: print every inute of a day
 *
 * Return: no return
 */

void jack_bauer(void)
{
	int mins, h1, h2, m1, m2;

	for (mins = 0; mins <= 1439; mins++)
	{
		h1 = (mins / 60) / 10;
		h2 = (mins / 60) % 10;
		m1 = (mins % 60) / 10;
		m2 = (mins % 60) % 10;
		_putchar('0' + h1);
		_putchar('0' + h2);
		_putchar(':');
		_putchar('0' + m1);
		_putchar('0' + m2);
		_putchar('\n');
	}
}

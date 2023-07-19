#include "main.h"

/**
 * _pow_recursion - calc x raised to power of y
 * @x: main value
 * @y: the power
 * Return: -1 if error else resultat
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

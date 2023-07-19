#include "main.h"
/**
 * _pow_recursion - returns x^y
 * @x: int to ultip
 * @y: the vaue to multip by
 * Return: x multipt y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

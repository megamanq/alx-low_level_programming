#include "main.h"
/**
 * _abs - a function
 *
 * Description: compute the absolute of an integer
 * @i: the integer to copute its absolute
 *
 * Return: always (the result) on succeed
 */

int _abs(int i)
{
	int res;

	if (i >= 0)
	{
		res = i;
	}
	else
	{
		res = i * (-1);
	}
	return (res);
}

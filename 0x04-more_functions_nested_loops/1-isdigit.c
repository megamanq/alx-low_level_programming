#include "main.h"
/**
 * _isupper - check if digit
 * 
 * @c: integer to check
 *
 * Return: return 1 on true and 0 on false
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

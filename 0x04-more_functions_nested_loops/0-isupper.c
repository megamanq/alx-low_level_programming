#include "main.h"
/**
 * _isupper - pimary function
 * 
 * descriptio: checks if uppercase
 * @c: character to check
 *
 * Return: always 1 on true and 0 on false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

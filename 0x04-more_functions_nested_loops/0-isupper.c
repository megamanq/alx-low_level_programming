#include "main.h"
/**
 * _isupper - check if it is upperca
 *
 * description: is a checker 
 * @c: data to check
 *
 * Return: always 1 on true and 0 on false
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

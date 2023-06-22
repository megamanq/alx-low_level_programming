#include "main.h"

/**
 * _isupper - main function
 * 
 * Description: checks if uppercase
 * @c: character to check
 *
 * Return: return 1 on true and 0 on false
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

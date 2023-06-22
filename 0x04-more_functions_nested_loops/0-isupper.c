#include "main.h"
/**
 * _isupper - main function
 * 
 * checks if uppercase
 * @c: character to check
 *
 * Return: return 1 on true and 0 on false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

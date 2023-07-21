#include "main.h"
/**
 * _isupper - main function
 *
 * description: check if uppercase
 * @c: the charactere to check
 *
 * Return: 1 when upper , 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _islower - function
 *
 * description: check if lower case or not
 *
 * @c : is the data to be checked
 *
 * Return: (1) if lowercase , else return (0)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
		return (0);
}

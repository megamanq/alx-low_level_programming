#include "main.h"

/**
 * get_endianness - check endianes
 * Return: 0 if bg endian, 1 if lile endian
 */

int get_endianness(void)
{
	unsigned int n = 1;

	char *c = (char *)&n;

	if (*c)
		return (1);
	else
		return (0);
}

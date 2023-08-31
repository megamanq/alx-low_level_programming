#include "main.h"

/**
 * get_endianness - chek endia
 * Return: 0 if bg endia / 1 if litle endia
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

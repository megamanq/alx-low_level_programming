#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * malloc_checked - Alloc mem
  * @b: size to alloc
  *
  * Return: no return
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free dogs
 * @d: ptr to dog_t struct
 * Return: no rteurn
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

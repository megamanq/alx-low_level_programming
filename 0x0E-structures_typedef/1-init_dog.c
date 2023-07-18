#include "dog.h"
#include <stdio.h>
/**
 * init_dog - funct to inti var struct dog
 * @d: ptr to strc dog
 * @name: ptr to str
 * @age: float
 * @owner: ptr to str
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

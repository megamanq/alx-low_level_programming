#include "dog.h"
#include <stdlib.h>

int strleng(char *str);
char *strcp(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dg
 * @owner: owner of dg
 * Return: ptr to dog_t if succ
 * null if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (!name || !newdog || !owner)
		return (0);

	newdog->name = malloc(sizeof(char) * (strleng(name) + 1));
	newdog->owner = malloc(sizeof(char) * (strleng(owner) + 1));
	newdog->age = age;

	if (!newdog->name || !newdog->owner)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (0);
	}

	newdog->name = strcp(newdog->name, name);
	newdog->owner = strcp(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}

/**
 * strleng - get str lenght
 * @str: ptr to string
 * Return: nbr of chars
 */

int strleng(char *str)
{
	unsigned int i;

	i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}

/**
 * strcp - copy scr to dest
 * @dest: destinatiopn
 * @src: source
 * Return: ptr to destinaztion
 */

char *strcp(char *dest, char *src)
{
	unsigned int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

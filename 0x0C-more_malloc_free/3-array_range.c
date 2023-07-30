#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max:max value
 * Return: nulll if min < max or malloc fail
 * ptr to array if succeed
 */

int *array_range(int min, int max)
{
	int *buffer;
	int i, range = max - min + 1;

	if (max < min)
		return (NULL);

	buffer = malloc(sizeof(int) * range);

	if (!buffer)
		return (NULL);

	for (i = 0; i <= range; i++)
	{
		if (min <= max)
			buffer[i] = min++;
	}

	return (buffer);
}

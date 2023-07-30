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
	int i, range = max - min;

	if (max < min)
		return (NULL);

	buffer = malloc(sizeof(int) * (range + 1));

	for (i = 0; i <= range; i++)
	{
		if (min <= max)
			buffer[i] = min + i;
	}

	return (buffer);
}

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
	int i, j, range = max - min + 1;

	if (max < min)
		return (NULL);

	buffer = malloc(sizeof(int) * range);

	for (i = 0, j = min; j <= max; j++, i++)
	{
		buffer[i] = j;
	}

	return (buffer);
}

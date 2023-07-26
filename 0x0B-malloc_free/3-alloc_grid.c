#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - make a 2D array of ints
 * @width: width of arr
 * @height: height of arr
 * Return: ptr to 2d arra or null on fail
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height);

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < height ; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (!arr[i])
		{
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}

			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width ; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

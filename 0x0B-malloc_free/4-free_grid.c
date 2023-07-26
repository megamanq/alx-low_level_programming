#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D array of ints
 * @grid: 2D arr
 * @height: height of arr
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

#include "main.h"
#include <stdlib.h>
/**
  * free_grid - frees the mem allocat
  * @grid: grid to fre
  * @height: heig of grd
  *
  * Return: no return
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

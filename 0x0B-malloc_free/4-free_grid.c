#include"holberton.h"
#include<stdlib.h>

/**
 *free_grid - frees a two dimensional grid
 *@grid: two dimensional array
 *@height: height of the two dimensional array
 *Return:void
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

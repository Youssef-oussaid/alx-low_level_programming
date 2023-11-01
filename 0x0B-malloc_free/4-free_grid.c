#include "main.h"

/**
 * free_grid - a function
 * @grid: an array
 * @height: height
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

#include "main.h"

/**
 * alloc_grid - a function that allocates a grid
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: 0 or NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width == 0 || height == 0)
		return (NULL);

	grid = (int **)malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

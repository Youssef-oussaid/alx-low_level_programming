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

	grid = (int **)malloc(width * sizeof(int *));

	if (width <= 0 || height <= 0 || grid == 0)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));

		if (grid[i] == 0) 
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
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

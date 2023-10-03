#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to a grid (success), NULL (failure)
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid = NULL;

	if (width < 1 || height < 1)
		return (grid);

	/* allocate number of rows */
	grid = (int **) malloc(sizeof(int *) * height);
	if (!grid)
		return (grid);

	/* allocate number of column for each row */
	for (i = 0; i < height; ++i)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (!grid[i])
		{
			for (j = 0; j < i; ++j)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	/* initialize grid with zero */
	for (i = 0; i < height; ++i)
		for (j = 0; j < width; ++j)
			grid[i][j] = 0;

	return (grid);
}

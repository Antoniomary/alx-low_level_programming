#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: pointer to 2D array.
 * @height: the number of rows in the 2D array.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

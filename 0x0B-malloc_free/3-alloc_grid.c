#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: the number of index in a column.
 * @height: the number of rows.
 * Return: pointer to a 2D array of integers (success), else
 * NULL (failure).
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **box;

	if (width == 0 || height == 0)
		return (NULL);

	box = (int **) malloc((height) * sizeof(int *));
	if (box == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		box[i] = (int *) malloc((width) * sizeof(int));
		if (box[i] == NULL)
		{
			for (; i <= 0; i--)
				free(box[i]);
			free(box);
			return (NULL);
		}
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			box[i][j] = 0;
			j++;
		}
		i++;
	}
	return (box);
}

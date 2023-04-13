#include "main.h"
#include <stdlib.h>
/**
 * array_range - it creates an array of integers.
 * @min: the first value in index[0] of array.
 * @max: the last value in the last index of array.
 * Return: pointer to the newly created array (success)
 * else NULL (failure).
 */
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
		return (NULL);

	/* determining the size of the array */
	size = max - min + 1;

	/* dynamically allocating memory to array */
	array = malloc(sizeof(int) * size);
	/* checks if memory was allocated to array */
	if (array == NULL)
		return (NULL);

	/* intializing the index of array with min to max */
	for (i = 0; i < size && min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}

#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value in array.
 * @max: maximum value in array.
 *
 * Return: pointer newly created array (success), NULL (failure)
 */

int *array_range(int min, int max)
{
	int i, *array = NULL;

	if (min > max)
		return (array);

	/* allocate space to array. The 1 is to balance the difference */
	array = (int *) malloc(sizeof(int) * (max - min + 1));
	if (array) /* allocation success, array is not NULL */
		for (i = 0; min <= max; ++min, ++i)
			array[i] = min;

	return (array);
}

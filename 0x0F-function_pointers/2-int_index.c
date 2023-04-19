#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: pointer to the array of integers to be searched.
 * @size: the size of the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Description: int_index returns the index of the first element
 * for which the cmp function does not return 0.
 * Return: number >= 0 (int found) else -1 (failure or no match).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	/* search for index with a particular integer */
	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check > 0)
			return (i);
	}

	return (-1);
}

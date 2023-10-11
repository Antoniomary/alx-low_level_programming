#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array to search.
 * @size: the number of elements in the array array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: if match, returns index, else -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = -1;

	if (size < 1 || !cmp || !array)
		return (index);

	for (index = 0; index < size; ++index)
		if (cmp(array[index]))
			return (index);

	return (-1);
}

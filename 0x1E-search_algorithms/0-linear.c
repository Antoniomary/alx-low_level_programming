#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array to search
 * @size: the size of array
 * @value: the value to search for in array
 *
 * Return: the index of the value else -1 if not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int index = -1;
	size_t i;

	if (array && size)
	{
		for (i = 0; i < size; ++i)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				index = i;
				break;
			}
		}
	}

	return (index);
}

#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: the array to search
 * @size: the size of array
 * @value: the value to search for in array
 *
 * Return: the index of the value else -1 if not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, i;

	if (!array || !size)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array:");
		for (i = l; i <= r; ++i)
			printf(" %d%c", array[i], i == r ? '\n' : ',');
		mid = l + (r - l) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
		{
			if (mid - 1 > r)
				break;
			r = mid - 1;
		}
	}

	return (-1);
}

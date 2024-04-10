#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: the array to search
 * @size: the size of array
 * @value: the value to search for in array
 *
 * Return: the index of the value else -1 if not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t l, r = 1, mid, i;

	if (!array || !size)
		return (-1);

	if (size == 1)
		return (array[0] == value ? 0 : -1);

	while (r < size && array[r] < value)
	{
		l = r;
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		r *= 2;
	}

	r = ((r < size) ? r : size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
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

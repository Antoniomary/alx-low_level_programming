#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: the array to search
 * @size: the size of array
 * @value: the value to search for in array
 *
 * Return: the index of the value else -1 if not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l = 0, h = size - 1;
	int v = value;
	int *ar = array;

	if (!array || !size)
		return (-1);

	pos = l + (((double)(h - l) / (ar[h] - ar[l])) * (v - ar[l]));

	while (l <= h && v >= ar[l] && v <= ar[h])
	{
		printf("Value checked array[%lu] = [%d]\n", pos, ar[pos]);

		if (ar[pos] == v)
			return ((int) pos);
		else if (ar[pos] < v)
			l = pos + 1;
		else
			h = pos - 1;

		pos = l + (((double)(h - l) / (ar[h] - ar[l])) * (v - ar[l]));
	}

	printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}

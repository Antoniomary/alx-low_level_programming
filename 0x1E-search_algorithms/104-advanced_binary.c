#include "search_algos.h"

int bin_search(int *array, size_t l, size_t r, int value, int pos);

/**
 * advanced_binary - searches for first index of a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: the array to search
 * @size: the size of array
 * @value: the value to search for in array
 *
 * Return: the index of the value else -1 if not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);

	return (bin_search(array, 0, size - 1, value, -1));
}

/**
 * bin_search - a recursive function that finds the first occurence of a value
 * @array: the array to search
 * @l: the low index
 * @r: the high index
 * @value: the value to search for in array
 * @pos: the position of value
 *
 * Return: the first index of value or -1 if not found
 */
int bin_search(int *array, size_t l, size_t r, int value, int pos)
{
	size_t mid, i;

	if (l <= r)
	{
		printf("Searching in array:");
		for (i = l; i <= r; ++i)
			printf(" %d%c", array[i], i >= r ? '\n' : ',');

		mid = l + (r - l) / 2;

		if (array[mid] == value)
		{
			pos = mid;
			if (mid == l && mid == r)
				return (pos);
			if (array[mid - 1] != value)
				return (pos);
			return (bin_search(array, l, mid, value, pos));
		}
		else if (array[mid] < value)
		{
			if (mid == l && mid == r)
				return (pos);
			return (bin_search(array, mid + 1, r, value, pos));
		}
		else
		{
			if (mid == l && mid == r)
				return (pos);
			return (bin_search(array, l, mid, value, pos));
		}
	}

	return (pos);
}

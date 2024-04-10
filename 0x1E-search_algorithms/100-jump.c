#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: the array to search
 * @size: the size of array
 * @value: the value to search for in array
 *
 * Return: the index of the value else -1 if not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b = 0;

	if (!array || !size)
		return (-1);

	while (b < size && array[b] < value)
	{
		a = b;
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		b += sqrt(size);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	b = ((b < size) ? b : size - 1);
	while (a <= b)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return ((int) a);
		a++;
	}

	return (-1);
}

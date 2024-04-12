#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: the list to search
 * @size: the size of list
 * @value: the value to search for in list
 *
 * Return: the index of the value else -1 if not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t a, b = 0, i;
	listint_t *prev;

	if (!list || !size)
		return (NULL);

	while (b < size && list && list->n < value)
	{
		a = b;
		b += sqrt(size);
		prev = list;
		if (b >= size)
		{
			for (i = a; i < size - 1 && list->next; ++i)
				list = list->next;
			printf("Value checked array[%lu] = [%d]\n", size - 1, list->n);
			break;
		}
		for (i = a; i < b && list->next; ++i)
			list = list->next;
		printf("Value checked array[%lu] = [%d]\n", b, list->n);
	}

	if (b >= size)
		printf("Value found between indexes [%lu] and [%lu]\n", a, size - 1);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	b = b < size ? b : size;
	while (a < b && prev)
	{
		printf("Value checked array[%lu] = [%d]\n", a, prev->n);
		if (prev->n == value)
			return (prev);
		a++;
		prev = prev->next;
	}

	return (NULL);
}

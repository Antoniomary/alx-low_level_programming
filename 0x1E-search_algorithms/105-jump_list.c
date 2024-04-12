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
	size_t a = 0, b, i;
	listint_t *prev;

	if (!list || !size)
		return (NULL);

	prev = list;
	b = sqrt(size);
	for (i = a; i < b && list->next; ++i)
		list = list->next;

	while (b < size && (list && list->n < value))
	{
		printf("Value checked array[%lu] = [%d]\n", b, list->n);
		a = b;
		prev = list;
		b += sqrt(size);
		for (i = a; i < b && list->next; ++i)
			list = list->next;
	}

	b = b < size ? b : size - 1;
	printf("Value checked array[%lu] = [%d]\n", b, list->n);
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	if (b == size - 1)
		b = size;
	while (a < b && prev)
	{
		printf("Value checked array[%lu] = [%d]\n", a, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
		a++;
	}

	return (NULL);
}

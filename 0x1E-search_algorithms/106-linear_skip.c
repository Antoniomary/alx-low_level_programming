#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: pointer to the head of the skip list to search in
 * @value: the value to search for in list
 *
 * Return: the index of the value else -1 if not present or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list;

	if (!list)
		return (NULL);

	while (list->next && list->n < value)
	{
		temp = list;
		if (list->express)
			list = list->express;
		else
			for ( ; list->next; list = list->next)
				;
		printf("Value checked at index [%lu] = [%d]\n",
				list->index, list->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			temp->index, list->index);

	for ( ; temp->index <= list->index; temp = temp->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		if (temp->next == NULL)
			break;
	}

	return (NULL);
}

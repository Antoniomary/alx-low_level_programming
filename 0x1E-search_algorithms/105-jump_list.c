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
	size_t step = 0, sqrt_;
	listint_t *jump, *temp;

	if (!list || !size)
		return (NULL);

	sqrt_ = sqrt(size);
	for (jump = list; jump->index < size && jump->n < value; )
	{
		temp = jump, step += sqrt_;
		while (jump->index < step)
		{
			if (jump->next == NULL)
				break;
			jump = jump->next;
		}
		printf("Value checked at index [%lu] = [%d]\n",
				jump->index, jump->n);
		if (jump->next == NULL)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			temp->index, jump->index);
	for ( ; temp && temp->index <= jump->index; temp = temp->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				temp->index, temp->n);
		if (temp->n == value)
			return (temp);
	}

	return (NULL);
}

#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: a pointer to a singly linked list.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp_h;

	if (h == NULL)
		return (0);

	temp_h = h;

	while (temp_h)
	{
		count++;
		temp_h = temp_h->next;
	}

	return (count);
}

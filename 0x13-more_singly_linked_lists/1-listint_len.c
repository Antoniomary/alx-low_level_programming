#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to head node of a singly linked list.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	static int count;

	if (h == NULL)
		return (count);

	++count;
	h = h->next;

	return (listint_len(h));
}

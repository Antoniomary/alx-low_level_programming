#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: head node of a doubly linked list.
 * @index: the index of the node, starting from 0.
 *
 * Return: the node at index else NULL if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; ++i)
		head = head->next;

	return (head);
}

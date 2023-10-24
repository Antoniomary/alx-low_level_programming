#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to head node of a linked list.
 * @index: the node to be returned.
 *
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && (i < index); ++i)
		head = head->next;

	return (i == index ? head : NULL);
}

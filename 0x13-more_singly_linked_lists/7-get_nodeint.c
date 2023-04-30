#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to a singly linked list.
 * @index: the node to be returned.
 *
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, num_of_nodes = 0;
	listint_t *nth_node;

	if (head == NULL)
		return (0);
	if (index == 0)
		return (head);

	nth_node = head;

	while (nth_node != NULL)
	{
		num_of_nodes++;
		nth_node = nth_node->next;
	}

	if (index <= num_of_nodes)
	{
		nth_node = head;
		for (i = 1; i <= index; i++)
			nth_node = nth_node->next;

		return (nth_node);
	}

	return (NULL);
}

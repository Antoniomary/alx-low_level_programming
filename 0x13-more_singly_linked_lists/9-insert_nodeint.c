#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: a pointer to a pointer to a listint_t linked list.
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0.
 * @n: the data for the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node = NULL, *temp = *head;

	/* tranverse list insert position is not index 0 */
	for (i = 0; idx && temp && (i < idx - 1); ++i)
		temp = temp->next;

	/* validates the right position to insert */
	if (idx == 0 || i == idx - 1)
	{
		node = malloc(sizeof(listint_t));
		if (node)
		{
			node->n = n;

			/* insert at beginning */
			if (idx == 0)
			{
				node->next = *head;
				*head = node;
			}
			else /* in-between or end */
			{
				node->next = temp->next;
				temp->next = node;
			}
		}
	}

	return (node);
}

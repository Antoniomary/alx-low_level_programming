#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @h: double pointer to head node of a doubly linked list.
 * @idx: the index of the node, starting from 0.
 * @n: the value for the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp = *h, *new = malloc(sizeof(dlistint_t));

	if (new)
	{
		new->n = n;
		new->prev = new->next =  NULL;

		if (idx == 0)
		{
			if (*h)
			{
				new->next = *h;
				(*h)->prev = new;
			}
			return ((*h = new));
		}

		for (i = 0; temp && temp->next && i < idx - 1; ++i)
			temp = temp->next;

		if (i < idx - 1)
			return (free(new), NULL);

		new->next = temp->next;
		new->prev = temp;
		temp->next->prev = new;
		temp->next = new;
	}

	return (new);
}

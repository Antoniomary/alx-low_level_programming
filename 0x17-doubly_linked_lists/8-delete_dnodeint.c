#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at
 * an index of a dlistint_t linked list.
 * @head: double pointer to head node of a doubly linked list.
 * @index: the index of the node that should be deleted. Offset is 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		if (*head && (*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
	}
	else
	{
		for (i = 0; temp && temp->next && i < index; ++i)
			temp = temp->next;

		if (i < index)
			return (-1);

		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
	}
	free(temp);

	return (1);
}

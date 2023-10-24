#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index of a linked list.
 * @head: double pointer to head node of a linked list
 * @index: the index of the node that should be deleted.
 * Note that index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head, *delete = NULL;

	if (*head)
	{
		if (index == 0)
		{
			delete = tmp, *head = tmp->next;
			return (free(delete), 1);
		}
		else
		{
			for (i = 0; tmp && (i < index - 1); ++i)
				tmp = tmp->next;

			if (i == index - 1)
			{
				delete = tmp->next;
				tmp->next = tmp->next ? tmp->next->next : NULL;
				return (free(delete), 1);
			}
		}
	}

	return (-1);
}

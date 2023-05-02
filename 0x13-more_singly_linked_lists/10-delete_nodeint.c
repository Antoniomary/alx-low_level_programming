#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: a pointer to the head pointer of a listint_t linked list
 * @index: index is the index of the node that should be deleted.
 * Note that index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *aux_temp;

	temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 1; i <= index; i++)
	{
		if (temp == NULL)
			return (-1);
		aux_temp = temp;
		temp = temp->next;
	}
	aux_temp->next = temp->next;
	free(temp);

	return (1);
}

#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head node of a doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}

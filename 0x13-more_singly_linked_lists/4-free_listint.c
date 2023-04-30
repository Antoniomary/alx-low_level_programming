#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the first node of a singly linked list.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		listint_t *temp = head->next;

		free(head);

		head = temp;
	}
}

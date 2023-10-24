#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the head node of a linked list.
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *temp = head->next;

		free(head);
		head = temp;
	}
}

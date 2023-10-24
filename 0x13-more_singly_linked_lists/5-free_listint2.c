#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list and sets head to NULL.
 * @head: a double pointer to a head node of a linked list.
 */
void free_listint2(listint_t **head)
{
	if (head != NULL)
		while (*head != NULL)
		{
			listint_t *temp = (*head)->next;

			free(*head);
			*head = temp;
		}

	head = NULL;
}

#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: a double pointer to a listint_t singly linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if (*head && (*head)->next)
	{
		prev_node = *head;
		*head = (*head)->next;
		next_node = (*head)->next;

		prev_node->next = NULL;
		while (next_node != NULL)
		{
			(*head)->next = prev_node;
			prev_node = *head;
			*head = next_node;
			next_node = next_node->next;
		}
		(*head)->next = prev_node;
	}

	return (*head);
}

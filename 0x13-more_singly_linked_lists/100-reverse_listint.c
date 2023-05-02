#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - a function that reverses a listint_t linked
 * list.
 * @head: a double pointer to a listint_t singly linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if (head == NULL || *head == NULL)
		return (*head);

	prev_node = *head;
	prev_node = prev_node->next;
	next_node = prev_node->next;

	(*head)->next = NULL;
	while (prev_node->next != NULL)
	{
		prev_node->next = *head;
		*head = prev_node;
		prev_node = next_node;
		next_node = next_node->next;
	}
	prev_node->next = *head;
	*head = prev_node;
	prev_node = NULL;

	return (*head);
}

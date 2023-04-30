#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a listint_t list.
 * @head: a pointer to a pointer to a singly linked list.
 * @n: the data to be added to a new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: a pointer to a pointer to a linked list.
 * @n: the data to use to create a new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}

#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: head node of a doubly linked list.
 * @n: the value for the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		if (*head)
			(*head)->prev = new;
		*head = new;
	}

	return (new);
}

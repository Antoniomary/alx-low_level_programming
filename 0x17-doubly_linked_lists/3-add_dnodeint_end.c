#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list.
 * @head: head node of a doubly linked list.
 * @n: the value for the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new = malloc(sizeof(dlistint_t));

	if (new)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;

		if (!(*head))
			return ((*head = new));

		temp = *head;
		while (temp && temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}

	return (new);
}

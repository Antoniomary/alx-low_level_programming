#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of
 * a dlistint_t list.
 * @h: head node of a doubly linked list.
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}

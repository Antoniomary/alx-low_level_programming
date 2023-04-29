#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a
 * listint_t list.
 * @h: a pointer to a singly linked list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp_h;

	if (h == NULL)
		return (0);

	temp_h = h;

	while (temp_h)
	{
		printf("%d\n", temp_h->n);
		count++;
		temp_h = temp_h->next;
	}

	return (count);
}

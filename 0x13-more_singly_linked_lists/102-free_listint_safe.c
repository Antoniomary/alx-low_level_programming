#include "lists.h"
#include <stdlib.h>

extern listint_t *detect_loop_node(listint_t *head);
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: a double pointer to a head node of the linked list.
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0, seen = 0;
	listint_t *t, *loop_node;

	if (*h)
	{
		loop_node = detect_loop_node(*h);
		while (*h)
		{
			t = *h;
			*h = (*h)->next;

			if (t == loop_node)
				++seen;
			if (seen == 2)
				break;

			free(t);
			++size;
		}

		*h = NULL, h = NULL;
	}

	return (size);
}

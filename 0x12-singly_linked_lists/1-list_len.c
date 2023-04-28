#include "lists.h"

/**
 * list_len - a function that returns the number of elements in
 * a linked list_t list.
 * @h: a node within a singly linked list
 *
 * Return: the number of elements in list_t.
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
		return (0);
	if (h == NULL)
		return (0);

	if (h->str == NULL)
		count++;
	else
		count++;

	p = h->next;

	while (p != NULL)
	{
		if (p->str == NULL)
			p->str = "(nil)";
		p = p->next;
		count++;
	}

	free(p);

	return (count);
}

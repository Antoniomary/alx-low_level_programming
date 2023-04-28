#include "lists.h"
#include <stdlib.h>

/**
 * print_list - a function that prints all the elements of a
 * list_t list.
 * @h: a node within a linked list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *tmp_h = (list_t *) malloc(sizeof(list_t));

	if (h == NULL)
		return (0);
	if (tmp_h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	count++;

	tmp_h = h->next;

	while (tmp_h != NULL)
	{
		if (tmp_h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", tmp_h->len, tmp_h->str);
		tmp_h = tmp_h->next;
		count++;
	}

	free(tmp_h);

	return (count);
}

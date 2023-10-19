#include "lists.h"

/**
 * list_len - a function that returns the number of elements in
 * a linked list_t list.
 * @h: pointer to head node of a linked list.
 *
 * Description: this function employs a recursive approach.
 * Return: the number of elements in list_t.
 */
size_t list_len(const list_t *h)
{
	static int count;

	if (h == NULL)
		return (count);

	++count;
	h = h->next;

	return (list_len(h));
}

#include "lists.h"
#include <stdlib.h>

void detectAndRemoveLoops(listint_t *head);
void removeLoops(listint_t *head, listint_t *loop);

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: a double pointer to a head node of a linked list.
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *t = *h;

	if (*h)
	{
		detectAndRemoveLoops(*h);

		while (t)
		{
			size++;
			t = t->next;

			free(*h);

			*h = t;
		}

		*h = NULL;
	}

	return (size);
}

/**
 * detectAndRemoveLoops - finds and removes loop from a LL if any.
 * @head: pointer to head node.
 *
 * Return: pointer to the loop in LL else NULL if no loop detected
 */
void detectAndRemoveLoops(listint_t *head)
{
	listint_t *slow_ptr = head, *fast_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
			removeLoops(head, slow_ptr);
	}
}

/**
 * removeLoops - a helper function that removes a loop.
 * @head: pointer to head node of linked list.
 * @loop: pointer to the looped part of the linked list.
 *
 * Return: Always the looped node itself.
 */
void removeLoops(listint_t *head, listint_t *loop)
{
	listint_t *p1 = head, *p2;

	while (1)
	{
		p2 = loop;

		while (p2->next != p1 && p2->next != loop)
			p2 = p2->next;

		if (p2->next == p1)
			break;
		p1 = p1->next;
	}

	p2->next = NULL;
}

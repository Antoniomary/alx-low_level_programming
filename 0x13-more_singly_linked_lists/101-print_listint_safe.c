#include "lists.h"
#include <stdlib.h>

listint_t *detectAndRemoveLoop(const listint_t *head);
listint_t *removeLoop(const listint_t *head, const listint_t *loop);

/**
 * print_listint_safe - a function that prints a listint_t linked
 * list.
 * @head: a pointer to a listint_t singly linked list.
 *
 * Return: the number of nodes in the list else 98 (failure).
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head, *loop;

	if (head == NULL)
		return (0);
	/* detects loop and removes it */
	loop = detectAndRemoveLoop(head);

	/* prints address and the elements of a linked list */
	while (temp)
	{
		printf("[%p] %d\n", (void *) temp, temp->n);
		count++;
		temp = temp->next;
	}

	if (loop)
	{
		printf("-> [%p] %d\n", (void *) loop, loop->n);

		temp = loop;
	}

	return (count);
}

/**
 * detectAndRemoveLoop - finds and removes loop from a LL if any.
 * @head: pointer to head node.
 *
 * Return: pointer to the loop in LL else NULL if no loop detected
 */
listint_t *detectAndRemoveLoop(const listint_t *head)
{
	const listint_t *slow_ptr = head, *fast_ptr = head, *loop_node;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			loop_node = removeLoop(head, slow_ptr);
			return ((listint_t *) loop_node);
		}
	}

	return (NULL);
}

/**
 * removeLoop - a helper function that removes a loop.
 * @head: pointer to head node of linked list.
 * @loop: pointer to the looped part of the linked list.
 *
 * Return: Always the looped node itself.
 */
listint_t *removeLoop(const listint_t *head, const listint_t *loop)
{
	const listint_t *p1 = head, *p2;

	while (1)
	{
		p2 = loop;

		while (p2->next != p1 && p2->next != loop)
			p2 = p2->next;

		if (p2->next == p1)
			break;
		p1 = p1->next;
	}

	*(listint_t **) &p2->next = NULL;

	return ((listint_t *) p1);
}

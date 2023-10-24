#include "lists.h"
#include <stdlib.h>

listint_t *detect_loop_node(listint_t *head);

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: a pointer to a listint_t singly linked list.
 *
 * Return: the number of nodes in the list else 98 (failure).
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, ctr;
	listint_t *temp;

	if (!head)
		return (98);

	temp = detect_loop_node((listint_t *) head);

	for (count = ctr = 0; head; ++count)
	{
		if (temp == head)
			++ctr;

		if (ctr == 2)
		{
			printf("-> [%p] %d\n", (void *) temp, temp->n);
			break;
		}

		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
	}

	return (count);
}

/**
 * detect_loop_node - a functions that gets node where a linked list loops.
 * @head: pointer to head node.
 *
 * Return: loop node if loop exists, else NULL.
 */
listint_t *detect_loop_node(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}

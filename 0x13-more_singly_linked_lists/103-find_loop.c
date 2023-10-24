#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer to head node of a singly linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if none.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);

	/**
	 * This is the Floyd cycle finding algoritm.
	 * It uses two pointers, a fast and a slow, to get
	 * detect a loop in 0(n) time and 0(1) space.
	 */
	slow = fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				fast = fast->next;
				slow = slow->next;
			}

			return (slow);
		}
	}

	return (NULL);
}

#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: a double pointer to head node of a linked list.
 *
 * Return: the deleted head node's data i.e n.
 */
int pop_listint(listint_t **head)
{
	int head_node_n = 0;

	if (head != NULL)
		if (*head != NULL)
		{
			listint_t *temp = (*head)->next;

			head_node_n = (*head)->n;
			free(*head);
			*head = temp;
		}

	return (head_node_n);
}

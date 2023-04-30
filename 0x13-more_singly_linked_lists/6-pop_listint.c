#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to a pointer to a singly linked list.
 *
 * Return: the deleted head node's data i.e n.
 */
int pop_listint(listint_t **head)
{
	int head_node_n;
	listint_t *temp;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	head_node_n = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (head_node_n);
}

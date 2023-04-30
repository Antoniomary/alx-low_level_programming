#include "lists.h"
#include <stdlib.h>

listint_t *insert_at_beg(listint_t **head, listint_t *new);
listint_t *insert_at_end(listint_t **head, listint_t *new);

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: a pointer to a pointer to a listint_t linked list.
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0.
 * @n: the data for the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, num_of_nodes = 0;
	listint_t *temp, *aux_temp, *new_node;

	if (head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		num_of_nodes++;
		temp = temp->next;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL && idx == 0)
		return (insert_at_beg(head, new_node));
	else if (idx == 0)
		return (insert_at_beg(head, new_node));
	else if (idx - 1 == num_of_nodes)
		return (insert_at_end(head, new_node));
	else if (idx >= 1 && idx <= num_of_nodes)
	{
		temp = *head;
		for (i = 0; i < idx; i++)
			temp = temp->next;

		aux_temp = temp->next;
		temp->next = new_node;
		new_node->next = aux_temp;

		return (new_node);
	}

	return (NULL);
}

/**
 * insert_at_beg - a functions that inserts at the beginning.
 * @head: a pointer to a pointer to a listint_t linked list.
 * @new: the new node to insert.
 *
 * Return: the address of the new node.
 */
listint_t *insert_at_beg(listint_t **head, listint_t *new)
{
	listint_t *temp;

	temp = *head;
	*head = new;
	new->next = temp;

	return (new);
}

/**
 * insert_at_end - a functions that inserts at the end.
 * @head: a pointer to a pointer to a listint_t linked list.
 * @new: the new node to insert.
 *
 * Return: the address of the new node.
 */
listint_t *insert_at_end(listint_t **head, listint_t *new)
{
	listint_t *temp;

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	new->next = NULL;

	temp->next = new;

	return (new);
}

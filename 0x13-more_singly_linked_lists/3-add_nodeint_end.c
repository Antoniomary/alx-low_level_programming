#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a listint_t list.
 * @head: a double pointer to a head node of a linked list.
 * @n: the data to be added to a new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node) /* malloc success, new_node is not NULL */
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
			*head = new_node;
		else
		{
			while (temp->next)
				temp = temp->next;
			temp->next = new_node;
		}
	}

	return (new_node);
}

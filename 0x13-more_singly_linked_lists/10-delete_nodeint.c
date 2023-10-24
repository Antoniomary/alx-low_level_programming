#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index of a linked list.
 * @head: double pointer to head node of a linked list
 * @index: the index of the node that should be deleted.
 * Note that index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, ret = -1;
	listint_t *temp = *head, *delete = NULL;

	if (*head)
	{
		if (index == 0)
			delete = temp, *head = temp->next;
		else
		{
			for (i = 0; temp && (i < index - 1); ++i)
				temp = temp->next;

			if (i == index - 1)
			{
				delete = temp->next;
				if (temp->next)
					temp->next = temp->next->next;
				else
					temp->next = NULL;
			}
		}

		free(delete);
		ret = 1;
	}

	return (ret);
}

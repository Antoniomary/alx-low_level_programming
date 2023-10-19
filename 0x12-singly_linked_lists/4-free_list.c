#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: a pointer to the head node of a list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head)
		while (head != NULL)
		{
			temp = head->next;
			free(head->str);
			free(head);
			head = temp;
		}
}

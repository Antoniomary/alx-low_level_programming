#include "lists.h"
#include <string.h>

unsigned int _strlen(const char *s);

/**
 * add_node_end - a function that adds a new node at the end of
 * a list_t list.
 * @head: a pointer to a pointer that points to a list_t.
 * @str: the string to copy.
 *
 * Return: the address of the new element, or 0 if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);
	if (temp == NULL)
	{
		free(new);
		return (0);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}

/**
 * _strlen - gets the length of a string.
 * @s: the string to get length of.
 *
 * Return: the length of s.
 */
unsigned int _strlen(const char *s)
{
	unsigned int count = 0;

	while (*s)
	{
		count++;
		s++;
	}

	return (count);
}

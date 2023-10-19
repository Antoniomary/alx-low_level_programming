#include "lists.h"
#include <string.h>

unsigned int _strlen(const char *s);

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: a double pointer to head node of a list_t.
 * @str: the string enter into the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}

/**
 * _strlen - a function that gets the length of a string.
 * @s: the string to get length of.
 *
 * Return: the length of s.
 */
unsigned int _strlen(const char *s)
{
	unsigned int count = 0;

	while (*s)
		count++, s++;

	return (count);
}

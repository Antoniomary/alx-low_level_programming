#include "lists.h"
#include <string.h>

unsigned int _strlen(const char *s);

/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list.
 * @head: the pointer to the first node.
 * @str: pointer to the string to duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
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

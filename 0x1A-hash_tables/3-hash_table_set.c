#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp = NULL, *node = NULL;
	char *value_dup = NULL;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_dup = strdup(value);
	index = hash_djb2((const unsigned char *) key) % ht->size;

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_dup;
			return (1);
		}
		temp = temp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (free(value_dup), 0);
	node->key = strdup(key);
	if (!node->key)
		return (free(value_dup), free(node), 0);
	node->value = value_dup;
	node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}

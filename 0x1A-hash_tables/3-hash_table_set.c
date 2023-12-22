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

	index = hash_djb2((const unsigned char *) key) % ht->size;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
		return (free(node), 0);
	node->value = value[0] == '\0' ? "" : strdup(value);
	if (!node->value)
		return (free(node->key), free(node), 0);
	node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = node->value;
				free(node->key), free(node);
				return (1);
			}
			temp = temp->next;
		}

		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}

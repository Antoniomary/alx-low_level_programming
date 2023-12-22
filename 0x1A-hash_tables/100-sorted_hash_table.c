#include "hash_tables.h"

void shash_table_sort(shash_table_t *ht, shash_node_t *node);

/**
 * shash_table_create - a function that creates a hash table.
 * @size: is the size of the array.
 *
 * Return: a pointer to the newly created hash table, else NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;

	table = (shash_table_t *) malloc(sizeof(shash_table_t));
	if (table)
	{
		table->array = (shash_node_t **) calloc(size, sizeof(shash_node_t *));
		if (!table->array)
		{
			free(table), table = NULL;
			return (NULL);
		}

		table->size = size;
		table->shead = NULL;
		table->stail = NULL;
	}

	return (table);
}

/**
 * shash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node = NULL;
	char *value_dup = NULL;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_dup = strdup(value);
	if (!value_dup)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value_dup;
			return (1);
		}
		node = node->next;
	}

	node = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (!node)
		return (free(value_dup), 0);
	node->key = strdup(key);
	if (!node->key)
		return (free(value_dup), free(node), 0);
	node->value = value_dup;
	node->next = ht->array[index];
	ht->array[index] = node;
	node->snext = node->sprev = NULL;

	shash_table_sort(ht, node);

	return (1);
}

/**
 * shash_table_sort - a function that arranges the sorted list.
 * @ht:the hash table you want to look into.
 * @node: node to be put in correct position.
 */
void shash_table_sort(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp = NULL;

	if (ht->shead == NULL)
		ht->shead = ht->stail = node;
	else
	{
		temp = ht->shead;
		while (temp && (strcmp(temp->key, node->key) < 0))
			temp = temp->snext;
		if (temp)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev == NULL)
				ht->shead = node;
			else
				node->sprev->snext = node;
		}
		else
		{
			node->sprev = ht->stail;
			ht->stail->snext = node;
			ht->stail = node;
		}
	}
}

/**
 * shash_table_get - a function that retrieves a value associated with a key.
 * @ht:the hash table you want to look into.
 * @key: the key you are looking for.
 *
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp = NULL;
	char *value = NULL;

	if (!ht || !key || *key == '\0')
		return (value);

	index = key_index((const unsigned char *) key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			value = temp->value;
			break;
		}
		temp = temp->next;
	}

	return (value);
}

/**
 * shash_table_print - a function that prints a hash table in sorted order.
 * @ht: the hash table to be printed.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;

	if (!ht)
		return;

	printf("{");
	temp = ht->shead;
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->snext)
			printf(", ");
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - a function that prints a hash table in reverse.
 * @ht: the hash table to be printed.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;

	if (!ht)
		return;

	printf("{");
	temp = ht->stail;
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->sprev)
			printf(", ");
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - a function that deletes a hash table.
 * @ht: the hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *delete = NULL, *temp = NULL;

	if (ht)
	{
		for (i = 0; i < ht->size; ++i)
		{
			temp = ht->array[i];
			while (temp)
			{
				delete = temp;
				temp = temp->next;
				free(delete->key);
				free(delete->value);
				free(delete);
			}
		}

		free(ht->array);
		free(ht);
	}
}

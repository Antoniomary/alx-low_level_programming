#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: is the size of the array.
 *
 * Return: a pointer to the newly created hash table, else BULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = NULL;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = (hash_node_t **) malloc(size * sizeof(hash_node_t));
	if (table->array == NULL)
		return (NULL);

	table->size = size;
	for (i = 0; i < table->size; ++i)
		table->array[i] = NULL;

	return (table);
}

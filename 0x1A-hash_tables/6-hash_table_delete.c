#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *delete = NULL, *temp = NULL;

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

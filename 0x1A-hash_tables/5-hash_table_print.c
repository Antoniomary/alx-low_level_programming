#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL;
	char *sep = "";

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; ++i)
		{
			temp = ht->array[i];
			if (temp)
				printf("%s", sep);
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (temp->next)
					printf(", ");
				temp = temp->next;
				sep = ", ";
			}
		}
	}
	printf("}\n");
}

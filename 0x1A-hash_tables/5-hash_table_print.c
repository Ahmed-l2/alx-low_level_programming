#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of the hash table
 * @ht: Hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current = NULL;
	int flag = 0;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (flag)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			flag = 1;
			current = current->next;
		}
	}
	printf("}\n");
}

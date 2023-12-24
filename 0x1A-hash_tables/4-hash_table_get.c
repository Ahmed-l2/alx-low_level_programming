#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: given hash table to retrieve the key value from.
 * @key: given key to retrieve
 * Return: returns the key value otherwise if not found, returns NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *current = NULL;
	const unsigned char *temp_key = (const unsigned char *)key;

	if (!ht || !key)
	{
		return (NULL);
	}

	i = key_index(temp_key, ht->size);

	current = ht->array[i];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

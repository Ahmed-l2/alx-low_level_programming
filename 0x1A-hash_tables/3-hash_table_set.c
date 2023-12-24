#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: given hash table.
 * @key: key to be added or updated.
 * @value: value to be added or updated.
 * Return: returns 1 if successfull otherwise 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node, current = NULL;

	if (!ht || !key || !value)
		return (0);
	i = key_index(key, ht->size);
	current = ht->array[i];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}

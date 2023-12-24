#include "hash_table.h"

/**
 * key_index - returns the index of a key in the hash table
 * @key: given key to find
 * @size: size of the hash table
 * Return: returns the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

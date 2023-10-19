#include "lists.h"

/**
 * list_len - function that returns the number of elements in linked list_t
 * @h: header of linked list
 * Return: returns list length
 */

size_t list_len(const list_t *h)
{
	int node_count = 0;
	const list_t *current = h;

	while (current)
	{
		node_count++;
		current = current->next;
	}
	return (node_count);
}

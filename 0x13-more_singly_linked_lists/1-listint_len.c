#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list head node
 * Return: returns the node count
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
	return (node_count);
}

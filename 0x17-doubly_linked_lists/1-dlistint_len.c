#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *
 * @h: head of dll
 *
 * Return: returns the number of nodes in dll
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	if (!h)
	{
		return (0);
	}

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}

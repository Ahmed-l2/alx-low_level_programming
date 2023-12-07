#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: given node
 *
 * Return: returns the number of nodes in the dll
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	if (!h)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}

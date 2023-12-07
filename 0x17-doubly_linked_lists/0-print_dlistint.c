#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	if (!h)
	{
		return 0;
	}

	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
		node_count++;
	}

	return node_count;
}

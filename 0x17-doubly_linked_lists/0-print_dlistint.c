#define <lists.h>

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = h;
	node_count = 0;

	if (!h)
	{
		return 0;
	}

	while (temp != NULL)
	{
		print("%d\n", temp->data);
		temp = temp->next;
		node_count++;
	}

	return node_count;
}

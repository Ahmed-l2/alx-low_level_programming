#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *node;

	while (temp->next != NULL)
	{
		node = temp;
		temp = temp->next;
		free(node);
	}

	free(temp);
	head = NULL;
}

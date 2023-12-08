#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (!head)
	{
		return (NULL);
	}

	for (i = 0; head != NULL; i++)
	{
		temp = head;
		if (i == index)
		{
			return (temp);
		}
		head = head->next;
	}

	return (NULL);
}

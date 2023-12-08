#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: head of dll
 * @index: the node to return
 *
 * Return: returns the nth node of the dll or NULL if not found
 */

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

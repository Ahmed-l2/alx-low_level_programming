#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: index of the node, starting at 0
 * Return: returns the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (temp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (NULL);
	}

	return (temp);
}

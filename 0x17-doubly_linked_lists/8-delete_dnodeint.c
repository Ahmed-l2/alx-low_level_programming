#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes note a speified index
 * @head: pointers to head of dll
 * @index: position of node to delete
 * Return: returns 1 if successful otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 1;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	else
	{
		if (temp->prev != NULL)
		{
			temp->prev->next = temp->next;
		}
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
		free(temp);
	}
	return (1);
}

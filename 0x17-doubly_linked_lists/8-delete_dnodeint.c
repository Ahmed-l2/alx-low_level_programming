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
	unsigned int i = 0;

	if (index < 0)
	{
		return (-1);
	}
	else
	{
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
			temp->prev->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			free(temp);
		}
	}
	return (1);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specified index
 * @head: head of linked list
 * @index: given index
 * Return: returns 1 if node deleted, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;
	listint_t *node_to_delete;

	if (!*head || !head)
	{
		return (-1);
	}
	if (!index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;

	while (temp)
	{
		if (i == index)
		{
			node_to_delete->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		node_to_delete = temp;
		temp = temp->next;
	}

	return (-1);
}

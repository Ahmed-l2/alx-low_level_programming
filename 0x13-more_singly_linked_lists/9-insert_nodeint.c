#include "lists.h"

/**
 * insert_nodeint_at_index - nserts a new node at a given position
 * @head: head of linked list
 * @idx: linked list index
 * @n: linked list data
 * Return: returns the address of the new node or NULL if failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new_node;
	unsigned int i;
	listint_t *next_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (temp->next == NULL)
			{
				free(new_node);
				return (NULL);
			}
			temp = temp->next;
		}

		next_node = temp->next;
		temp->next = new_node;
		new_node->next = next_node;
		return (new_node);
	}
	return (NULL);
}

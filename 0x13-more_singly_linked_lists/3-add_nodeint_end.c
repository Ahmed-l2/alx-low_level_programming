#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the listint_t list
 * @head: head of linked list
 * @n: data added to new node
 * Return: returns new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new_node;

	if (temp == NULL)
	{
		*head = new_node;
	}

	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

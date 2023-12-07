#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: head op dll
 * @n: data to be assigned to new node
 *
 * Return: returns new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}

	(*head) = new_node;

	return (new_node);
}

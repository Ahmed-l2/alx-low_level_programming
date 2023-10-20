#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of linked list
 * @str: string to be duplicated
 * Return: return address of new element or NULL if failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new_node;
	size_t len = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

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

	while (str[len])
	{
		len++;
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	return (new_node);
}

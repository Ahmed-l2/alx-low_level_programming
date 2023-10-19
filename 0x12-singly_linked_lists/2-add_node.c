#include "lists.h"

/**
 * adds a new node at the beginning of a list_t list
 * @head: current head node
 * @str: string to be duplicated
 * Return: returns new element or NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}

	new_node->next = *head;
	new_node->len = len;
	*head = new_node;

	return (new_node);

}

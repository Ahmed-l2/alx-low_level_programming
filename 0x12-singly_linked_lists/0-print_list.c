#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: head node
 * Return: return number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		node_count++;
		current = current->next;
	}
	return (node_count);
}

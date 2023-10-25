#include "lists.h"

/**
 * free_listint_safe - detects and frees the linked list listint_t with loops
 * @h: head of linked list
 * Return: returns size of list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	int loop;
	listint_t *temp;
	size_t node_count = 0;

	if (*h == NULL || h == NULL)
	{
		return 0; 
	}

	while (*h)
	{
		loop = *h - (*h)->next;
		if (loop > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			node_count++;
		}

		else
		{
			free(*h);
			*h = NULL;
			node_count++;
			break;
		}
	}
	
	*h = NULL;
	return node_count;
}

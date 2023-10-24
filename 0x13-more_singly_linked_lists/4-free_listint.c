#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

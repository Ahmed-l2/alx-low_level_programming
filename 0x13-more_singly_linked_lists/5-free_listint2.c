#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head node of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while ((temp = *head) != NULL)
	{
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}

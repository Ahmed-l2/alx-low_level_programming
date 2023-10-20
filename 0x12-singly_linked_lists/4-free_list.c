#include "lists.h"

/**
 * free_list -  a function that frees a list_t list
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

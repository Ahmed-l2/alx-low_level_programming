#include "lists.h"

/**
 * free_list -  a function that frees a list_t list
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *del;

	while (temp->next != NULL)
	{
		del = temp;
		temp = temp->next;
		free(del->str);
		free(del);
	}
	free(temp->str);
	free(temp);

}

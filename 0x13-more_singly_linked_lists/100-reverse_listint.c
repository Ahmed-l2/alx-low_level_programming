#include "lists.h"

/**
 * reverse_listint - reverses the listint linked list
 * @head: head of linked list
 * Return: returns pointer to the new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *previous, *next;


	previous = NULL, next = NULL;

	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;

	return (*head);
}

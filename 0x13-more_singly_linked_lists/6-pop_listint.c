#include "lists.h"

/**
 * pop_listint - deletes the head node of listin_t
 * @head: head of linked list
 * Return: returns the head nose's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	num = temp->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}

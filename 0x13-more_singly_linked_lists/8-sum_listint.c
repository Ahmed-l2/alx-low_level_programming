#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of linked list
 * @head: head of linked list
 * Return: returns sum of all data of linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

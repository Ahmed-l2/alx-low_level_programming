#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data of dlistint_t linked list
 *
 * @head: head of dll
 *
 * Return: returns the sum of all data otherwise NULL
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t node_count = 0;

	if (!head)
	{
		exit(98);
	}

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		node_count++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (node_count);
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
	}

	return (node_count);
}

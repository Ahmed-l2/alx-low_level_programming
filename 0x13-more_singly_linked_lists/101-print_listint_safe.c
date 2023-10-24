#include "lists.h"

const listint_t **re(const listint_t **list, size_t size,
		const listint_t *new_list);

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of list
 * Return: returns node count
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0, i;
	const listint_t **detect_list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < node_count; i++)
		{
			if (head == detect_list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(detect_list);
				return (node_count);
			}
		}
		node_count++;
		detect_list = re(detect_list, node_count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(detect_list);
	return (node_count);
}

/**
 * listint_t - allocates memory for lists with loops
 * @list: given linked list with loop
 * @size: size of loop
 * @new_list: new list
 * Return: returns new list
 */

const listint_t **re(const listint_t **list, size_t size,
		const listint_t *new_list)
{
	const listint_t **new;
	size_t i;

	new = malloc(size * sizeof(listint_t *));
	if (new == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
	{
		new[i] = list[i];
	}
	new[i] = new_list;
	free(list);
	return (new);
}

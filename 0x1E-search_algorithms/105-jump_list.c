#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * Jump search algorithm.
 *
 * @list: given list
 * @size: size of given list
 * @value: value to be found in the list
 *
 * Return: returns pointer to the node where value is found or -1 otherwise
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0;
	size_t step = (size_t)sqrt(size);
	listint_t *current = list;
	listint_t *prev = NULL;

	if (!list)
		return (NULL);

	for (; current->index + 1 < size && current->n < value;)
	{
		prev = current;

		for (i += step; current->index < i; current = current->next)
		{
			if (current->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index,
			current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}

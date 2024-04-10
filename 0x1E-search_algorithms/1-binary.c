#include "search_algos.h"

/**
 * binary_search - searches for value in a sorted array of integers
 * @array: given array
 * @size: size of array
 * @value: value to be searched
 * Return: returns value in array or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	if (!array || !size || !value)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r + 1; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
		}
		printf("\n");

		m = ((l + r) / 2);

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}

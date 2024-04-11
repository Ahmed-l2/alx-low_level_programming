#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: given array
 * @size: size of given array
 * @value: value to be found
 * Return: returns index of value in array or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t j, i = 0, prev = 0;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		prev = i;
		i += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);

	for (j = prev; j <= i && j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}

	return (-1);
}

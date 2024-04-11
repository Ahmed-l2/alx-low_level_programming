#include "search_algos.h"

/**
 * min - finds the minimum of two integers
 * @a: first int
 * @b: second int
 *
 * Return: returns the minimal of the two
 */

size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

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

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: given array
 * @size: size of given array
 * @value: value to be found in array
 * Return: returns index of value in array or -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int result;

	if (!array || !size)
		return (-1);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound,
				array[bound]);
		bound *= 2;
	}
	bound /= 2;

	printf("Value found between indexes [%ld] and [%ld]\n", bound,
			min(size - 1, bound * 2));
	result = (binary_search(array + bound, min(bound + 1, size - bound), value));

	if (result == -1)
		return (-1);
	else
		return (result + bound);
}

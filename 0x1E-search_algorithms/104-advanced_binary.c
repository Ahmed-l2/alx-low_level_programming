#include "search_algos.h"

/**
 * advanced_bin_helper - helper function for recursion
 * @array: given array
 * @l: most left index of array
 * @r: most right index of array
 * @value: value to be found in the index
 *
 * Return: returns the index of the value or -1 otherwise
 */

int advanced_bin_helper(int *array, size_t l, size_t r, int value)
{
	size_t m, i;

	if (r < l)
		return (-1);

	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	m = l + (r - l) / 2;

	if (array[m] == value && (m == l || array[m - 1] != value))
		return (m);
	if (array[m] >= value)
		return (advanced_bin_helper(array, l, m, value));
	return (advanced_bin_helper(array, m + 1, r, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: given array
 * @size: size of the given array
 * @value: value to be found in array
 * Return: returns index of value in array or -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (advanced_bin_helper(array, 0, size - 1, value));
}

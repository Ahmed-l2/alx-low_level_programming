#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min number of integers
 * @max: max number of integers
 * Return: returns pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;
	int least = min, i = 0;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (0);
	}

	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}

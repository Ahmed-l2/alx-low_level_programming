#include "search_algos.h"

/**
  * linear_search - searches for a value in an array of integers using LS algo
  * @array: given array
  * @size: size of array
  * @value: value to be searched
  *
  * Return: returns value if found or -1 otherwise
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !size || !value)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

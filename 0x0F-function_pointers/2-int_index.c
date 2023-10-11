#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: pointer to a function that uses the return value of this function
 * Return: returns index of first element of array or -1 for failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		return (-1);
	}
}

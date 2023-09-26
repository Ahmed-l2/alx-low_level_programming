#include "main.h"

/**
 * print_diagsums -  function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int sum_primary = 0;
	int sum_secondary = 0;
	int i, index, secondary_index;
	for (i = 0; i < size; i++)
	{
		index = i * size + i;

		sum_primary += a[index];

		secondary_index = (i + 1) * (size - 1);

		sum_secondary += a[secondary_index];
	}

	printf("%d, %d\n", sum_primary, sum_secondary);
}

#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: given number
 * @index: index of the bit to be set
 * Return: returns 1 if sucess or -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int swap;

	if (index > sizeof(*n) * 8 - 1)
	{
		return (-1);
	}

	swap = ~(1 << index);
	*n = *n & swap;

	return (1);
}

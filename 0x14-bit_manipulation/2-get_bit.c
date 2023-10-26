#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: given value
 * @index: index of the wanted bit
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}

	bit = (n >> index) & 1;

	return (bit);
}

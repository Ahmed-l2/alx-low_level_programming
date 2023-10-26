#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: returns the count of bits needed to flip from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count = 0;

	diff = n ^ m;

	while (diff != 0)
	{
		count += diff & 1;
		diff = diff >> 1;
	}

	return (count);
}

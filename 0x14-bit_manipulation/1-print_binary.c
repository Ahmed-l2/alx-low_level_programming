#include "main.h"

/**
 * print_binary - prints the binary respresentation of a number
 * @n: given number
 */

void print_binary(unsigned long int n)
{
	unsigned long num = n;
	int shifts = 0;
	int i, bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n != 0)
	{
		n = n >> 1;
		shifts++;
	}

	for (i = shifts - 1; i >= 0; i--)
	{
		bit = (num >> i) & 1;
		_putchar(bit + '0');
	}
}

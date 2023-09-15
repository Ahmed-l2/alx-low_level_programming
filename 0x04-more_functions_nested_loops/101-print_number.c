#include "main.h"

/**
 * print_number - function prototype
 *
 * Description: prints given integer
 *
 * @n: takes in input
 *
 */


void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= -1;
		num = n;
		_putchar('-');
	}

	num /= 10;

	if (num != 0)
	{
		print_number(num);
		_putchar(num % 10 + 48);
	}
}

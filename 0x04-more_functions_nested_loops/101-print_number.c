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
		_putchar('-');
		num = -num;
		print_number(num);
	}
	else if (num >= 10)
	{
		print_number(num / 10);
		_putchar((num % 10) + 48);
	}
	else if (num <= 9)
	{
		_putchar(num + 48);
	}
}

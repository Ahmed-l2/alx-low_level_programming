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
	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		_putchar((n % 10) + 48);
	}
	else if (n <= 9)
	{
		_putchar(n + 48);
	}
}

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
		_putchar((n * -1) / 10 + 48);
		_putchar((n * -1) % 10 + 48);
	}
	else if (n <= 9)
	{
		_putchar(n + 48);
	}
	else if (n <= 99)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);

	}
	else if (n <= 999)
	{
		_putchar((n / 100) + 48);
		_putchar((n % 100) / 10 + 48);
		_putchar((n % 100) % 10 + 48);
	}
	else if (n <= 9999)
	{
		_putchar((n / 1000) + 48);
		_putchar((n / 100) % 10 + 48);
		_putchar((n % 100) / 10 + 48);
		_putchar((n % 100) % 10 + 48);
	}
}

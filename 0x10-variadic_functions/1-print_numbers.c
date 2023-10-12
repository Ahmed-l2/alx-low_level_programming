#include "variadic_functions.h"

/**
 * print_numbers - prints  numbers, followed by a new line
 * @separator: used to separate the numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	va_start(args, n);

	for (i = 0; i < n && n != 0; i++)
	{
		if (separator != NULL)
		{
			x = va_arg(args, int);
			if (i < n - 1)
			{
				printf("%d%s", x, separator);
			}
			else
			{
				printf("%d", x);
			}
		}
		else
		{
			x = va_arg(args, int);
			printf("%d", x);
		}
	}
	va_end(args);
	printf("\n");
}

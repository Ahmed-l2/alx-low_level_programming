#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: what separates each string
 * @n: number of given strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char* str;

	va_start(args, n);

	for (i = 0; i < n && n != 0; i++)
	{
		str = va_arg(args, const char*);
		if (i < n - 1)
		{
			printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	va_end(args);
	printf("\n");
}

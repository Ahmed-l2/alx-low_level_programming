#include "main.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: returns sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	unsigned int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

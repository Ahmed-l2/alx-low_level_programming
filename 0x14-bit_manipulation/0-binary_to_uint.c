#include "main.h"

/**
 * power_of_two - calculates 2 by the power of the given number
 * @n: given number
 * Return: returns results
 */

int power_of_two(int n)
{
	int result = 1, i;

	for (i = 0; i < n; i++)
	{
		result *= 2;
	}

	return (result);
}

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: binary string
 * Return: returns result if sucessful otherwise resturns 0;
 */

unsigned int binary_to_uint(const char *b)
{
	int result = 0, len = 0, i;
	int pow = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			result += (b[i] - '0') * power_of_two(pow);
			pow++;
		}
	}
	return (result);
}

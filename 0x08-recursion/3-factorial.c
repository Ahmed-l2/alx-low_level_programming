#include "main.h"

/**
 * factorial - function that prints the factorial of given number
 * @n: given number
 * Return: returns factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

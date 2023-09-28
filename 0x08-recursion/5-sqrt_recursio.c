#include "main.h"

/**
 * _sqrt_recursion - function that finds natural square root
 * @n: given int
 * @val: square root number
 * Return: int of natural squareroot
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find the square root of a number
 * @n: given int
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}

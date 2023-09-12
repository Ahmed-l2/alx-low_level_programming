#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n - user defined integer
 *
 * Return: 1 is greater than 0, 0 if equal to 0 and -1 if less than zero
 */

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
	}
	else if ( n == 0)
	{
		return (0);
	}
	else
	{
		return(-1);
	}

}

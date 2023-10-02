#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function prototype
 *
 * Description: Checks if input is a digit or not
 * @c: checks input of function
 *
 * Return: 1 if digit otherwise 0
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}


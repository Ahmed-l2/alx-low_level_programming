#include "main.h"
#include <stdio.h>
/**
 * _islower - function prototype
 *
 * @c: checks input of function
 *
 * Return: 1 if lowercase otherwise 0
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	
	else
	{
		return (0);
	}
}


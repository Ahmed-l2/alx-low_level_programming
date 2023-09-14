#include "main.h"
#include <stdio.h>
/**
 * _islower - function prototype
 *
 * Description: Checks if letter is uppercase or not
 * @c: checks input of function
 *
 * Return: 1 if uppercase otherwise 0
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}


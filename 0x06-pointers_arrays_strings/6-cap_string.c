#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase
 *
 * @c: input string
 *
 * Return: strings swapped string
 */

char *string_toupper(char *c)
{
	int i;
	int l = 0;

	while (c[l])
	{
		l++;
	}

	for (i = 0; i <= l; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
	}

	return (c);
}

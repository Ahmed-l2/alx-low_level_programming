#include "main.h"

/**
 * _strlen - function
 *
 * Description: a function that returns the length of a string.
 *
 * @s: takes in string
 *
 * Return: returns the length of the string
 */

_strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

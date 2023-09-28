#include "main.h"

/**
 * _strlen_recursion - prints the length of a string using recursion
 * @s: given string
 * Return: Returns the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: inputs first given string
 *
 * @s2: inputs second given string
 *
 * Return: returns (s1 ascii value - s2 ascii value) if different
 * returns (-1) if s1 reaches null and s2 does not
 * returns (1) if s1 does not reach null and s2 does
 * returns (0) if both strings match
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	if (s1[i] == '\0' && s2[i] != '\0')
	{
		return (-1);
	}
	else if (s1[i] != '\0' && s2[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

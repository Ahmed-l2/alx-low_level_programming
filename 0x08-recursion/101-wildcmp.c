#include "main.h"

/**
 * wildcmp - compares if two strings are identical
 * @s1: first string
 * @s2: second string
 * Return: returns 1 if identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (1);
	}

	if (s1[0] == s2[0])
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (s2[0] == '*')
	{
		if ((wildcmp(s1, s2 + 1)) == 1)
		{
			return (1);
		}

		if (wildcmp(s1 + 1, s2) == 1)
		{
			return (1);
		}
	}

	if (s1[0] == '\0' && s2[0] == '*')
	{
		(return wildcmp(s1, s2 + 1));
	}
	return (0);
}

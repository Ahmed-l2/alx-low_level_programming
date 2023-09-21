#include "main.h"


/**
 * isLower - checks if letter is lower case
 *
 * @c: given letter
 *
 * Return: returns letter
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isSeparator - checks if the string is a separatos
 *
 * @c: given string
 *
 * Return: returns 1 if string is seParator otherwise 0
 */

int isSeparator(char c)
{
	int i;
	char separator[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == separator[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalizes a string
 *
 * @s: given string
 *
 * Return: returns capatilized string
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundSeparator = 1;

	while (*s)
	{
		if (isSeparator(*s))
		{
			foundSeparator = 1;
		}
		else if (isLower(*s) && foundSeparator)
		{
			*s -= 32;
			foundSeparator = 0;
		}
		else
		{
			foundSeparator = 0;
		}
		s++;
	}
	return (ptr);
}

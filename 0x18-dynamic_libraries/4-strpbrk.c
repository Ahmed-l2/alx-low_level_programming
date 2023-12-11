#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: given string
 * @accept: accepted characters
 * Return: returns pointer to byte in s that matches one of accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&(s[i]));
			}
			j++;
		}

		i++;
	}

	return (NULL);
}

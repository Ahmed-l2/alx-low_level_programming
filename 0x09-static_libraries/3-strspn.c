#include "main.h"

/**
 * _strspn - function that gets the length of prefix substring
 * @s: given string
 * @accept: accepted bytes of string
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0;

	while (s[count])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[count] == accept[i])
			{
				break;
			}
		}

		if (!accept[i])
		{
			return (count);
		}

		count++;

	}
	return (count);
}

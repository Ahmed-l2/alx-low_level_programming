#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: given string
 * @needle: string to search for
 * Return: pointer to byte of found string or NULL if no string found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, int j;

	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (&(haystack[i]));
		}
		i++;
	}
	return (NULL);
}

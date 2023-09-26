#include <stdio.h>

/**
* _strchr - function that locates a character in a string
* @s: given string
* @c: search character
* Return: returns pointer to character if found, otherwise returns NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return &(s[i]);
		}
		i++;
	}
	
	return NULL;
}

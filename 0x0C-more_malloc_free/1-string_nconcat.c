#include "main.h"

/**
 * isalpha - checks if character is alphabetical + spaces
 * @c: given character
 * Return: returns the character
 */

int isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == ' ');
}

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to concatenate from the second string
 * Return: returns a pointer to the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len = 0;

	char *ptr;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[len] != '\0')
	{
		len++;
	}
	ptr = (char *)malloc(len + n * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (isalpha(s1[i]))
		{
			ptr[j] = s1[i];
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		if (isalpha(s2[i]))
		{
			ptr[j] = s2[i];
			j++;
		}
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}

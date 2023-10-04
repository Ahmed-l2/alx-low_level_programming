#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: given string
 * Return: Returns NULL if str = NULL otherwise returns pointer to
 * a newly allocated space in mempry containing string.
 */

char *_strdup(char *str)
{
	int size = 0, i;
	const char *src = str;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size])
	{
		size++;
	}

	ptr = (char *)malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = src[i];
	}
	ptr[size] = '\0';

	return (ptr);
}

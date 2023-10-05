#include "main.h"

/**
 * strtow - splits string into words
 * @str: given string
 * Return: returns pointer to array of strings
 */
char **strtow(char *str)
{
	int r = 0, i, f, l, b, word_count, o = 0;
	char **ptr;
	char *ntr;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			r++;
	}
	r++;
	ptr = (char **)malloc((r + 1) * sizeof(char *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		if (b == 0 || (str[b] != ' ' && str[b - 1] == ' '))
		{
			f = b;
		}
		if (str[b] != ' ' && (str[b + 1] == ' ' || str[b + 1] == '\0'))
		{
			l = b;
			ntr = (char *)malloc((l - f + 2) * sizeof(char));
			if (ntr == NULL)
				return (NULL);
			for (word_count = f; word_count <= l; word_count++)
			{
				ntr[word_count - f] = str[word_count];
			}
			ntr[l - f + 1] = '\0';
			ptr[o] = ntr;
			o++;
		}
	}
	ptr[r] = NULL;
	return (ptr);
}

#include "main.h"

int wrdcnt(char *s);

/**
 * strtow - splits string into words
 * @str: given string
 * Return: returns pointer to array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, word_count;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	ptr = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	ptr[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			ptr[word_count] = char(char *)malloc(j * sizeof(char));
			j--;
			if (ptr[word_count] == NULL)
			{
				for (k = 0; k < word_count; k++)
					free(ptr[word_count]);
				free(ptr[n - 1]);
				free(ptr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				ptr[word_count][l] = str[i + l];
			ptr[word_count][l] = '\0';
			word_count++;
			i += j;
		}
		else
			i++;
	}
	return (ptr);
}

/**
 * wrdcnt - counts number of words in string
 * @s: given string
 * Return: returns int off numbe rof words
 */

int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
		{
			n++;
		}
	}
	n++;
	return (n);
}

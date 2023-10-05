#include "main.h"

/**
 * strtow - splits string into words
 * @str: given string
 * Return: returns pointer to array of strings
 */
char **strtow(char *str)
{
	int num_words = 0;
	int i, word_index, start, word_length, j;

	if (!str || !*str)
		return (NULL);
	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			num_words++;
	if (num_words == 0)
		return (NULL);
	char **ptr = (char **)malloc((num_words + 1) * sizeof(char *));

	if (!ptr)
		return (NULL);
	i = 0;
	word_index = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i])
		{
			start = i;
			while (str[i] && str[i] != ' ')
				i++;
			word_length = i - start;
			ptr[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
			if (!ptr[word_index])
				for (j = 0; j <= word_index; j++)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			for (j = 0; j < word_length; j++)
				ptr[word_index][j] = str[start + j];
			ptr[word_index][word_length] = '\0';
			word_index++;
		}
	}
	ptr[num_words] = NULL;
	return (ptr);
}

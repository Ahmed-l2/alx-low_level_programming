#include "main.h"

/**
 * strtow - splits string into words
 * @str: given string
 * Return: returns pointer to array of strings
 */
char **strtow(char *str)
{

	int num_words = 0, word_index = 0;
	int start, end, word_length, j;
	int i = 0;
	char **ptr;

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			num_words++;
	if (num_words == 0)
		return (NULL);
	ptr = (char **)malloc((num_words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			end = i - 1;
			word_length = end - start + 1;
			ptr[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
			if (ptr[word_index] == NULL)
			{
				for (j = 0; j < word_index; j++)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
			for (j = 0; j < word_length; j++)
				ptr[word_index][j] = str[start + j];
			ptr[word_index][word_length] = '\0';
			word_index++;
		}
	}
	ptr[num_words] = NULL;
	return (ptr);
}

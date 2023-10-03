#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: specific char to initialize array
 *
 * Return: return NULL if size = 0, otherwise returns pointer to char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}

	return (ptr);
}

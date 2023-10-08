#include "main.h"

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of array
 * @size: size of each array elements
 * Return: returns ptr to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	char *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

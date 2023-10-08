#include "main.h"

/**
 * malloc_checked - dynamically allocates memory using malloc
 * @b: ammout of memory in byes
 * Return: returns pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}

	return (ptr);
}

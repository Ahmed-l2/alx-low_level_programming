#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to memory location to start filling
 * @b: constant byte value
 * @n: numb er of bytes to be filled
 * return: returns filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

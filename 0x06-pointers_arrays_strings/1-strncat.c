#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: where the src will append to
 *
 * @src: string to be appended
 *
 *@n: number of bytes to be concatenated
 *
 * Return: both strings concatenated
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0, i = 0;

	while (dest[l])
	{
		l++;
	}

	while (src[i] < n && src[i] != '\0')
	{
		dest[l] = src[i];
		i++;
		l++;
	}

	if (l < n)
	{
		dest[l] = '\0';
	}

	return (dest);
}

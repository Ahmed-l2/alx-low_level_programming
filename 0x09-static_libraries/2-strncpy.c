#include "main.h"

/**
 * _strncpy - copies string to another string
 *
 * @dest: destination of copied string
 *
 * @src: string to be copied
 *
 * @n: limit of copied characters
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

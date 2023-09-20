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

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}

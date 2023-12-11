#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: where the src will append to
 *
 * @src: string to be appended
 *
 * Return: both strings concatenated
 */

char *_strcat(char *dest, char *src)
{
	int l = 0, i = 0;

	while (dest[l])
	{
		l++;
	}

	while (src[i] != '\0')
	{
		dest[l] = src[i];
		i++;
		l++;
	}

	dest[l] = '\0';
	return (dest);
}

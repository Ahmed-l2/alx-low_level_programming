#include "main.h"

/**
 * _strcpy - function prototype
 *
 * Description: copies strings pointed by src to dest
 *
 * @src: given string
 *
 * @dest: destination of coppied string
 *
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int l = 0;

	while (src[l])
	{
		l++;
	}

	for (i = 0; i < l && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < l; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

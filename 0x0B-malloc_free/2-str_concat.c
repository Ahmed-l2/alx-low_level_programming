#include "main.h"

/**
 * _strlen - prints the length of given string
 * @s: given string
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcat - concatenates two strings
 * @dest: string to be modified
 * @src: string to be moved to dest
 * Return: returns concatenated string
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
/**
 * _strcpy - copies a string to another string
 * @dest: string to be copied to
 * @src: copied string
 * Return: returns copied string
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
	dest[i] = '\0';
	return (dest);
}
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	int size = strlen(s1) + strlen(s2);
	char *ptr = (char *)malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	_strcpy(ptr, s1);
	_strcat(ptr, s2);
	return (ptr);
}

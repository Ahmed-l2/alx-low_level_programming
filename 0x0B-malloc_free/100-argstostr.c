#include "main.h"

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
 * argstostr - concatenates all the aruments of program
 * @ac: numbe rof arguments
 * @av: string of arguments
 * Return: returns pointer to string
 */
char *argstostr(int ac, char **av)
{
	int r, sum = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < ac; r++)
	{
		sum += _strlen(av[r]);
	}
	sum += ac + 1;

	str = (char *)malloc(sum * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	str[0] = '\0';

	for (r = 0; r < ac; r++)
	{
		_strcat(str, av[r]);
		_strcat(str, "\n");
	}

	str[_strlen(str)] = '\0';

	return (str);
}

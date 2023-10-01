include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: given string
 * Return: returns length
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
	}
	return (l);
}

/**
 * is_palindrome_helper - extension of the palindrome function
 * @start: start of string
 * @end: end of string
 * Return: 1 if string is a single character, 0 if character is not paindrome
 * otherwise calls recursive
 */

int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (*start != *end)
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(start + 1, end - 1));
	}
}

/**
 * is_palindrome - checks if given string is a palindrome or not
 * @s: given string
 * Return: return 1 if the string is a pal, otherwise 0
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, s + _strlen(s) - 1));
}

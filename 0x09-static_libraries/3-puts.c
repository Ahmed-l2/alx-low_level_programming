#include "main.h"

/**
 * _puts - function
 *
 * Description: a function that prints a string,
 * followed by a new line, to stdout
 *
 * @str: takes in string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}

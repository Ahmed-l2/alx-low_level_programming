#include "main.h"

/**
 * puts_half - function
 *
 * Description: a function that prints the second half of a string
 * followed by a new line
 *
 * @str: takes in string
 */

void puts_half(char *str)
{
	int l = 0;
	int i;

	while (str[l])
	{
		l++;
	}

	i = l / 2;

	if (l % 2 != 0)
	{
		putchar(str[(l - 1) / 2];
	}

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}

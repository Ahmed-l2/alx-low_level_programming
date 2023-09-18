#include "main.h"

/**
 * print_rev - function prototype
 *
 * Description: prints a string, in reverse
 *
 * @s: pointer to string str
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

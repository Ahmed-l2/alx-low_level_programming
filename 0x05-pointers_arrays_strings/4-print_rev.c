#include "main.h"

/**
 * print_rev - function prototype
 *
 * Description: prints a string, in reverse
 *
 * @s: takes input of str
 */

void print_rev(char *s)
{
	int i = 0;
	int r;

	while (s[i] != '\0')
	{
		i++;
	}

	r = i;
	while (s[r - 1] >= 0)
	{
		putchar(s[r]);
		r--;
	}
	putchar('\n');
}

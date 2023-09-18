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
	int l, r;

	l = _strlen(s);
	while ((r = l - 1) >= 0
	{
		putchar(s[r]);
		r--;
	}
	putchar('\n');
}

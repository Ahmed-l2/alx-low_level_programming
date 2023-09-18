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
	int l;

	l = _strlen(s);
	for (int r = l - 1; r >= 0; r--)
	{
		putchar(s[r]);
	}
	putchar('\n');
}

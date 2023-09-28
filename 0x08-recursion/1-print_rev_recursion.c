#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: given string
 */
 
void _print_rev_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}

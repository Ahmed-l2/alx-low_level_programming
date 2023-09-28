#include "main.h"

/**
 * _puts_recursion - recursive function that prints string
 * @s: s given string
 */

_puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	putchar("\n");
}

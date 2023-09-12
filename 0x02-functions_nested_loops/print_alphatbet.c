#include "main.h"

/**
 * print_alphabet - function
 *
 * Description: prints alphabet from a to z
 *
 */


void print_alphabet(void)

{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}

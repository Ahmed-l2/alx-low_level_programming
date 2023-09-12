#include "main.h"

/**
 * print_alphabet_x10 - prototype function
 *
 * Description: prints the print_alphabet function x10
 *
 * return: always 0
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}

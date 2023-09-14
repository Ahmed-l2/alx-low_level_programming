#include "main.h"

/**
 * print_line - Function prototype
 *
 * Description: draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 */

void print_square(int size)
{
	int count, line;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (count = 0; count < size; count++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}

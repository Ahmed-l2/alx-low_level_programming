#include "main.h"

/**
 * print_square - Function prototype
 *
 * Description: draws a square in the terminal
 *
 * @size: number of squares * number of lines
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

#include "main.h"

/**
 * puts2 - function prototype
 *
 * Description: prints every other character of a string
 *
 * @str: takes in string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

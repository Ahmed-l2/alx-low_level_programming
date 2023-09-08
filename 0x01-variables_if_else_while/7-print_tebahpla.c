#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there*/

/**
 * main - Entry point
 * sizeof: provides byte and size of variable
 * Return: Always 0 (success)
 */

int main(void)
{
	char lc = 'z';

	while (lc >= 'a')
	{
		putchar(lc);
		lc--;
	}

	putchar('\n');

	return (0);
}

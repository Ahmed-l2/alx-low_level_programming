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
	char hex[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hex[i]);
		i++;
	}

	putchar('\n');

	return (0);
}

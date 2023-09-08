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
	char hex[] = "123456789abcdef";

	for (int i = 0; i < 16; i++)
	{
		putchar(hex[i]);
	}

	putchar('\n');

	return (0);
}

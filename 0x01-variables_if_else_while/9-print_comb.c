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
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		if (num <= 8)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}

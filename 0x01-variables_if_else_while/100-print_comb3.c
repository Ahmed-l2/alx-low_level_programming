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
	int num = 1;

	while (num < 90)
	{
		putchar('0' + num / 10); /* Print the tens digit */
		putchar('0' + num % 10); /* Print the oones digit */

		if (num <= 88)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int c;
	int num = 0;

	srand(time(NULL));

	while (num <= 2645)
	{
		c = (rand() % (126 - 33 + 1)) + 33;
		num += c;
		putchar(c);
	}

	putchar(2772 - num);
	return (0);
}

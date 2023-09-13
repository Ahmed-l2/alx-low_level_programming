#include <stdio.h>


/**
 * main - entry point
 *
 * Description: a program that calculates the first 50 fibnacci numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 1, b = 2;
	int sum;
	int i;
	printf ("%d, %d, ", a, b);
	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		printf("%d, ", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}

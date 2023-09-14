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
	unsigned long int a = 1, b = 2;
	unsigned long int sum;
	int i;

	printf("%lu, %lu, ", a, b);
	for (i = 0; i < 96; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i < 95)
		{
			printf(", ");
		}
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}

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
	long int a = 1, b = 2;
	long int sum;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		printf("%ld", sum);
		if (i < 47)
		{
			printf(", ");
		}
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}

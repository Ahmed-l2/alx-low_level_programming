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
	long int sum = 0;
	long int even_sum = 0;

	while (sum < 4000000)
	{
			if (b < 4000000 && b % 2 == 0)
			{
				even_sum += b;
			}
			sum = a + b;
			a = b;
			b = sum;
	}
	printf("%ld", even_sum);
	printf("\n");
	return (0);
}

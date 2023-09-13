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

	printf("%d, \n%d, \n", a, b);
	for(int i = 0; i < 48; i++)
	{
		sum = a + b;
		printf("%d, \n", sum);
		a = b;
		b = sum;
	}
	return (0);
}


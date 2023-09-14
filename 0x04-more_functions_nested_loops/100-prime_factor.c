#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints out the largest prime factor of a numer
 *
 * Return: always 0 (success)
 */



int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int divisor = 2;

	while (divisor * divisor <= n)
	{
		if (n % divisor == 0)
		{
			n = n / divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", n);

	return (0);
}

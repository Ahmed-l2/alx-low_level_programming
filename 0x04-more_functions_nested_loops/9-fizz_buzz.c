#include <stdio.h>

/**
 * main - entry poind
 *
 * Description: prints the numbers from 1 to 100 but for the multiples
 * of 3 prints Fizz and Buzz for the multiples of 5 and FizzBuzz for
 * the multiples of both 3 and 5
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if (counter != 1)
		{
			printf(" ");
		}
		if ((counter % 3) == 0 && (counter % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((counter % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((counter % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", counter);
		}
	}
	printf("\n");

	return (0);

}

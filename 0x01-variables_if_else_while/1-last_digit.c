#include <stdlib.h>
#include <time.h>
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
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes there */
	if (l > 5)
	{
		printf("Last digit of is %d is %d and is greater than 5\n", n, l);
	}

	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}

	else if (l < 6 && n > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}

	return (0);
}

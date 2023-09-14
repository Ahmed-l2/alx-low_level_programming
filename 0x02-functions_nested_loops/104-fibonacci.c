#include <stdio.h>


/**
 * main - entry point
 *
 * Description: a program that calculates 98 fibnacci numbers
 *
 * Return: always 0 (success)
 *
 *
 * length_counter - calculates the length of a given number
 *
 * @num: takes in input
 *
 * Return: returns the length of the given number
 *
 */

int numLength(int num)
{
	int length = 0;

	while (num != 0)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}


int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 1000000000, f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
		{
			printf("%lu", f1o);
		}
		initial0s = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}

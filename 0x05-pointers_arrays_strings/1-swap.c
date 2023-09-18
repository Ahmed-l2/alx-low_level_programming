#include "main.h"

/**
 * swap_int - function
 *
 * Description: swaps the value of two integers
 *@a: takes in input
 *@b: takes in input
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

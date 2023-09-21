#include "main.h"

/**
 * reverse_array - function that reverses an array
 *
 * @a: input array
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int rev;
	int i, h;

	for (i = 0, h = (n - 1); i < h; i++, h--)
	{
		rev = a[i];
		a[i] = a[n - 1];
		a[n - 1] = rev;
	}
}

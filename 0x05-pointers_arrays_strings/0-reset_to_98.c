#include "main.h"

/**
 * reset_to_98 - function
 *
 * Description: takes a pointer to an int as parameter
 * and updates the value it points to to 98
 *
 * @n: pointer to given value
 *
 * Return: returns the value of the pointer
 */

void reset_to_98(int *n)
{
	*n = 98;
	return (*n);
}

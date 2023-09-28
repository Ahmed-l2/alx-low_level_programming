#include "main.h"

/**
 * is_prime_number - finds whether numbe ris prime or not
 * @n: given int
 * Return: returns 1 for prime and zero for none prime
 */

int check_prime(int n, int o);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all numbers less than n can divide it
 * @n: given int
 * @o: the divisor
 * Return: returns int
 */

int check_prime(int n, int o)
{
	if (o >= n && n > 1)
	{
		return (1);
	}
	else if (n % o == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, o + 1));
	}
}

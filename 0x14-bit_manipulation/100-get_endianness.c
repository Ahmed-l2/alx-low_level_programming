#include "main.h"

/**
 * get_endianness - a function that checks the endianness of a system
 * Return: returns 1 if system is Little Endianness and 0 if otherwise
 */

int get_endianness(void)
{
	int check = 1;

	return (*(char *)&check);
}

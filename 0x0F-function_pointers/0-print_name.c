#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: given name
 * @f: a a pointer to a function that the name passes through
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

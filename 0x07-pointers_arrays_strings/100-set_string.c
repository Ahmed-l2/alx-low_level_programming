#include "main.h"

/**
 * set_string - a function that sets the value of pointer to char
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}

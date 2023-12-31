#include "main.h"

/**
 * rev_string - function prototype
 *
 * Description: function that reverses a string
 *
 * @s: takes string to reverse
 */

void rev_string(char *s)
{
	int l = 0;
	char tmp, *begin_str, *end_str;

	while (s[l] != ('\0'))
	{
		l++;
	}

	begin_str = s;
	end_str = s + l - 1;

	while (begin_str < end_str)
	{
		tmp = *begin_str;
		*begin_str = *end_str;
		*end_str = tmp;
		begin_str++;
		end_str--;
	}
}

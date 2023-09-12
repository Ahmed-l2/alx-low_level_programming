#include <stdio.h>
#include "main.h"

/**
* main (0) : Beginning of program
*
*return (0) : sucess
*/

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		_putchar(str[i]);
		++i;
	}
	
	_putchar('\n');

	return (0);
}

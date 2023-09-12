#include "main.h"

/**
* main -  Entry point
*
* Description : prints _putc har using putchar prototype
*
* Return: Always 0 (Sucess)#include "main.h"

/**
* main -  Entry point
*
* Description : prints _putc har using putchar prototype
*
* Return: Always 0 (Sucess)
*/

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

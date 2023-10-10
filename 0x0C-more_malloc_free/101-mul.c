#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str: given string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

}

/**
 * _atoi - converts string to integer
 * @s: given string
 * Return: returns integer
 */

int _atoi(const char *s)
{
	unsigned long int r = 0, num, i;
	int sign = 1;

	for (num = 0; !(s[num] >= 48 && s[num] <= 57); num++)
	{
		if (s[num] == '-')
		{
			sign *= -1;
		}
	}

	for (i = num; s[i] >= 48 && s[i] <= 57; i++)
	{
		r *= 10;
		r += (s[i] - 48);
	}
	return (sign * r);
}
/**
 * print_int - prints int
 * @n: given int
 */

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, s;

	for (i = 0; n / div > 9; i++, div *= 10)
	;

	for (; div >= 1; n %= div, div /= 10)
	{
		s = n / div;
		_putchar('0' + s);
	}
}

/**
 * main - entry point
 * Description: function that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar("\n");

	return (0);
}

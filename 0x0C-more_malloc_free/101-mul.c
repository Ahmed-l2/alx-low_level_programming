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
	_putchar('\n');

}

/**
 * is_digit - checks if a character is a digit or not
 * @s: given string
 * Return: 1 if all characters are digits and 0 if not
 */

int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
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
	unsigned long int div = 1, i, r;

	for (i = 0; n / div > 9; i++, div *= 10)
	;

	for (; div >= 1; n %= div, div /= 10)
	{
		r = n / div;
		_putchar('0' + r);
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
		_puts("Error");
		exit(98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		_puts("Error");
		return (98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

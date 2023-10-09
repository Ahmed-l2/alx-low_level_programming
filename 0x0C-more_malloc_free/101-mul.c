#include "main.h"

/**
 * isDigit - checks if the given character is a digit
 * @s: given character
 * Return: returns character
 */

int isDigit(char s)
{
	return (s >= '0' && s <= '9');
}

/**
 * _atoi - converts string to integer
 * @s: given string
 * Return: returns integer
 */

int _atoi(const char *s)
{
	unsigned long int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
	} while (*s++);
	return (num * sign);
}

/**
 * _strlen - prints the length of a string
 * @s: given string
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

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
	int i, j;
	unsigned long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < _strlen(argv[i]); j++)
		{
			if (!isDigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	print_int(num1 * num2);
	printf("\n");

	return (0);
}

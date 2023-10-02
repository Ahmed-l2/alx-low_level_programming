#include <stdio.h>

/**
 * _isdigit - function prototype
 * Description: Checks if input is a digit or not
 * @c: checks input of function
 * Return: 1 if digit otherwise 0
 */

int _isdigit(char *c)
{
	while (*c)
	{
		if (*c < '0' || *c > '9')
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * _atoi - converts a string to an integer
 * @s: string input parameter
 * Return: converted integer from string
 */

int _atoi(char *s)
{
	unsigned int num = 0;
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
 * main - entry point
 * Description: a program that multiplies two numbers
 * @argc: argc
 * @argv: argv
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	result = num1 + num2;
	printf("%d\n", result);

	return (0);
}

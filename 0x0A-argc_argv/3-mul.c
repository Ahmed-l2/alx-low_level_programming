#include <stdio.h>

/**
 * main - entry point
 * Description: a program that multiplies two numbers
 * @argc: argc
 * @argv: argv
 * Return: always 0
 */

int _isdigit(char *c)
{
        while(*c)
	{
		if (*c < '0' || *c > '9')
		{
			return (0);
		}
		c++;
	}
	return (1);
}

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

int main(int argc, char *argv[])
{
	int i, num, result = 1;

	for (i = 1; i < argc; i++)
	{
		if (!_isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		num = _atoi(argv[i]);
		result *= num;
	}

	printf("%d\n", result);
	return (0);
}

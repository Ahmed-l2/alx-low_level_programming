#include "main.h"

/**
 * isDigit - checks if character is a digit
 * @c: given character
 * Return: 1 if c is digit otherwise 0
 */

int isDigit(int c)
{
	return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
	int i = 0;

	while(*s++)
	{
		i++;
	}
	return (i);
}

char *string_multiply(char *s1, char *s2)
{
	char *p;
	int str1, str2, i, j, k, n;

	str1 = _strlen(s1);
	str2 = _strlen(s2);
	p = malloc(i = n = str1 + str2);
	if (!p)
	{
		printf("Error\n"), exit(98);
	}
	while (i--)
	{
		p[i] = 0;
	}
	for (str1--; str1 >= 0; str1--)
	{
		if(!isDigit(s1[str1]))
		{
			free(p);
			printf("Error\n"), exit(98);
		}
		i = s1[str1] - '0';
		k = 0;

		for (str2 = _strlen(s2) - 1; str2 >= 0; str2--)
		{
			if (!isDigit(s2[str2]))
			{
				free(p);
				printf("Error\n"), exit(98);
			}
			j = s2[str2] - '0';
			k += p[str1 + str2 + 1] + (i * j);
			p[str1 + str2 + 1] = k % 10;
			k /= 10;
		}

		if (k)
		{
			p[str1 + str2 + 1] += k;
		}
	}
	return (p);
}

int main(int argc, char **argv)
{
	char *p;
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n"), exit(98);
	}

	c = _strlen(argv[1]) + _strlen(argv[2]);
	p = string_multiply(argv[1], argv[2]);
	b = 0;
	a = 0;
	while (b < c)
	{
		if (p[b])
			a = 1;
		if (a)
			_putchar(p[b] + '0');
		b++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(p);
	return (0);
}


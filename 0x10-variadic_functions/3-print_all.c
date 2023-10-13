#include "variadic_functions.h"

/**
 * var_char - variable character
 * @sep: string separator
 * @args: argument pointer
 */

void var_char(char *sep, va_list args)
{
	printf("%s%c", sep, va_arg(args, int));
}

/**
 * var_int - variable integer
 * @sep: string separator
 * @args: argument pointer
 */

void var_int(char *sep, va_list args)
{
	printf("%s%d", sep, va_arg(args, int));
}

/**
 * var_float - variable float
 * @sep: string separator
 * @args: argument pointer
 */

void var_float(char *sep, va_list args)
{
	printf("%s%f", sep, va_arg(args, double));
}

/**
 * var_string - variable string
 * @sep: string separator
 * @args: argument pointer
 */

void var_string(char *sep, va_list args)
{
	char *s = va_arg(args, char *);

	switch ((int)(!s))
	{
		case 1:
			s = "(nil)";
	}
	printf("%s%s", sep, s);
}

/**
 * print_all - a function that prints anything
 * @format: format specifier
 */

void print_all(const char * const format, ...)
{
	char *sep = "";
	int i = 0, j;
	va_list args;

	variable_t variables[] = {
		{"c", var_char},
		{"i", var_int},
		{"f", var_float},
		{"s", var_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (variables[j].variable)
		{
			if (format[i] == variables[j].variable[0])
			{
				variables[j].f(sep, args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

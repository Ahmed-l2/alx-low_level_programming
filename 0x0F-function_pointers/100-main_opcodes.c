#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */

int main(int argc, char **argv)
{
	int num;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	while (num--)
	{
		printf("%02hhx%s", *ptr++, num ? " " : "\n");
	}
	printf("\n");

	return (0);
}

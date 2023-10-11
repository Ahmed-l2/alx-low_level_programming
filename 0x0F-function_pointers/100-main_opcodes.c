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
	int num, i;
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

	for (i = 0; i < num; i++)
	{
		printf("%02x", (unsigned char)ptr[i]);
	}
	printf("\n");

	return (0);
}

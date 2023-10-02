#include <stdio.h>

/**
 * main - entry pooint
 * Description: program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}

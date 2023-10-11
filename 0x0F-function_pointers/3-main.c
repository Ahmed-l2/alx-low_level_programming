#include "3-calc.h"

/**
 * main - entry point
 * Description: checks the input to preform the calculation
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int (*op)(int, int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(num1, num2));
	return (0);
}

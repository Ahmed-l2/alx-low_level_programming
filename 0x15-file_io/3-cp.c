#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERROR_READ "Error: Can't read from file %s\n"
#define ERROR_WRITE "Error: Can't read from file %s\n"
#define ERROR_CLOSE "Error: Can't close fd %d\n"

/**
 * main - entry point
 * Description: a program that copies the content of one file to another
 *
 * @argc: checks if two files are given
 * @argv: holds the names of the files
 *
 * Return: returns 1 on success, 0 on failure
 */

int main(int argc, char *argv[])
{
	int file1, file2;
	ssize_t bytes;
	char buffer[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		dprintf(STDERR_FILENO, ERROR_READ, argv[1]), exit(98);
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file2 == -1)
		dprintf(STDERR_FILENO, ERROR_WRITE, argv[2]), exit(99);

	while ((bytes = read(file1, buffer, BUF_SIZE)) > 0)
	{
		if (write(file2, buffer, bytes) != bytes)
			dprintf(STDERR_FILENO, ERROR_WRITE, argv[2]), exit(99);
	}
	if (bytes == -1)
		dprintf(STDERR_FILENO, ERROR_READ, argv[1]), exit(98);

	file1 = close(file1);
	file2 = close(file2);
	if (file1)
		dprintf(STDERR_FILENO, ERROR_CLOSE, file1), exit(100);
	if (file2)
		dprintf(STDERR_FILENO, ERROR_CLOSE, file1), exit(100);

	return (EXIT_SUCCESS);
}

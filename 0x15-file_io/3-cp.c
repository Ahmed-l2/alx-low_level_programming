#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERROR_READ "Error: Can't read from file %s\n"
#define ERROR_WRITE "Error: Can't write to %s\n"
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
	int file1, file2, error_close;
	ssize_t bytesR, bytesW;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		dprintf(STDERR_FILENO, ERROR_READ, argv[1]), exit(98);
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file2 == -1)
		dprintf(STDERR_FILENO, ERROR_WRITE, argv[2]), exit(99);

	bytesR = 1024;
	while (bytesR == 1024)
	{
		bytesR = read(file1, buffer, 1024);
		if (bytesR == -1)
			dprintf(STDERR_FILENO, ERROR_READ, argv[1]), exit(98);
		bytesW = write(file2, buffer, bytesR);
		if (bytesW == -1)
			dprintf(STDERR_FILENO, ERROR_WRITE, argv[2]), exit(99);
	}

	error_close = close(file1);
	if (error_close == -1)
		dprintf(STDERR_FILENO, ERROR_CLOSE, file1), exit(100);

	error_close = close(file2);
	if (error_close == -1)
		dprintf(STDERR_FILENO, ERROR_CLOSE, file2), exit(100);

	return (0);
}

#include "main.h"

/**
 * read_textfile - reads a textfile and prints the specified ammount of letters
 * @filename: name of file to be read
 * @letters: number of letters to be printed
 * Return: returns the number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer[BUF_SIZE];
	ssize_t bytesRead, bytesWritten;

	if (!filename || !letters)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		return (0);
	}

	bytesRead = read(f, &buffer[0], letters);
	bytesWritten = write(STDOUT_FILENO, &buffer[0], bytesRead);

	close(f);
	return (bytesWritten);

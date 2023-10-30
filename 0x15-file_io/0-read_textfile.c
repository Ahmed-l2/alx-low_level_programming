#include "main.h"

/**
 * read_textfile - reads a textfile and prints the specified ammount of letters
 * @filename: name of file to be read
 * @letters: number of letters to be printed
 * Return: returns the number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, fp);

	if (bytesRead < 0)
	{
		free(buffer), fclose(fp);
		return (0);
	}

	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	if (bytesWritten < bytesRead)
	{
		free(buffer), fclose(fp);
		return (0);
	}

	fclose(fp), free(buffer);
	return (bytesRead);

}

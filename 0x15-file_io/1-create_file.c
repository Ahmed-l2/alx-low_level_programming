#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text to be added to file
 * Return: return 1 if successful and -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bytesWritten = 0, length = 0;

	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (length)
	{
		bytesWritten = write(f, text_content, length);
	}

	close(f);
	return (bytesWritten == length ? 1 : -1);
}

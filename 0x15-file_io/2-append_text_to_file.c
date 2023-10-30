#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: file name
 * @text_content: text to be apprended
 * Return: 1 if successful otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t length = 0, bytesW = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}

	f = open(filename, O_WRONLY | O_APPEND, 0644);
	if (f == -1)
	{
		return (-1);
	}

	if (length)
	{
		bytesW =  write(f, text_content, length);
	}

	if (bytesW == -1)
	{
		close(f);
		return (-1);
	}
	close(f);
	return (bytesW == length ? 1 : -1);
}

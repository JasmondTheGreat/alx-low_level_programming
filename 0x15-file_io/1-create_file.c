#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: filename param
 * @text_content: text content param
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int bytes_written;

	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_desc, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);

	return (1);
}

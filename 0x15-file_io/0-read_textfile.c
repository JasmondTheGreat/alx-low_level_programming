#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 *
 * @filename: filename param
 * @letters: letter param
 *
 * Return: number of letters printed,
 * else 0 if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t bytes_read, bytes_written;
	char *buffer;

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, fp);

	if (ferror(fp))
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written != bytes_read)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);

	return (bytes_read);
}

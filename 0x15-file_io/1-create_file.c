#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file to create
 * @text_content: text content to place in file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	ssize_t writeStat;

	count = strlen(text_content);

	fd = open(filename, O_WRONLY);

	if (fd == -1)
		fd = open(filename, O_WRONLY | O_CREAT, 600);
	else
		fd = open(filename, O_WRONLY | O_CREAT);

	printf("text: %s\n", text_content);
	perror("Error");

	if (fd == -1 || filename == NULL)
		return (-1);

	writeStat = write(fd, text_content, count);

	if (writeStat == -1)
		return (-1);
	close(fd);

	return (1);
}

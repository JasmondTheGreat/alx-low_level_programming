#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: filename param
 * @text_content: text content
 *
 * Return: 1 on success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fp = fopen(filename, "a");

	if (fp == NULL)
		return (-1);

	fprintf(fp, "%s", text_content);

	fclose(fp);

	return (1);
}

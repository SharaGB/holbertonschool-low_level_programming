#include "main.h"
/**
 * create_file - Create a file
 * @filename: Check name file
 * @text_content: Name of the file to create
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int sz_rw, n;
	int fp = open(filename, O_RDWR | O_TRUNC | O_CREAT, text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	for (n = 0; text_content[n] != '\0'; n++)

		sz_rw = write(fp, text_content, n);
	if (fp == -1 || sz_rw == -1)
	{
		return (-1);
	}
	close(fp);

	return (1);
}

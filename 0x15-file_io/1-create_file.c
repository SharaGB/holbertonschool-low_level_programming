#include "main.h"
/**
 * create_file - Create a file
 * @filename: Check name file
 * @text_content: Name of the file to create
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int sz_rw;
	int fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fp = open(filename, O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
		return (1);
	}
	sz_rw = write(fp, text_content, strlen(text_content));
	if (fp == -1 || sz_rw == -1)
	{
		return (-1);
	}
	close(fp);

	return (1);
}

/**
 * _strlen - The length of a string
 * @s: Check the string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;
	return (leng);
}

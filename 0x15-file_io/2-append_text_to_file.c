#include "main.h"
/**
 * append_text_to_file - Function that appends text at the end file
 * @filename: Name of the file
 * @text_content: String to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int sz_wr;
	int fp = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fp = open(filename, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
		return (1);
	}
	sz_wr = write(fp, text_content, strlen(text_content));
	if (fp == -1 || sz_wr == -1)
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

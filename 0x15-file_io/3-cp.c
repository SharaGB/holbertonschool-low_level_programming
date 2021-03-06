#include "main.h"
/**
 * function_cp - Progam that copies the content of a file to another file
 * @file_to: Check arguments
 * @file_from: String arguments
 * Return: Void
 */
void function_cp(const char *file_from, const char *file_to)
{
	int src, dest, file_r, mode, close_r, close_w;
	char buf[1024];

	mode = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	src = open(file_from, O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, mode);
	file_r = 1024;
	while (file_r >= 1024)
	{
		file_r = read(src, buf, 1024);
		if (file_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (write(dest, buf, file_r) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	close_r = close(src);
	close_w = close(dest);
	if (close_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	if (close_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
}

/**
 * main - Funcion that check the number of argument
 * @argc: Check the number of argument
 * @argv: Check string arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	function_cp(argv[1], argv[2]);
	return (0);
}

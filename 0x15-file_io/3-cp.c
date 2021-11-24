#include "main.h"
/**
 * cp - Progam that copies the content of a file to another file
 * @file_to: Check arguments
 * @file_from: String arguments
 * Return: Void
 */
void function_cp(const char *file_to, const char *file_from)
{
	int src, dest, file_r;
	char buf[1024];

	src = open(file_from, O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((file_r = read(src, buf, 1024)) > 0)
	{
		if (write(dest, buf, file_r) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (file_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close(src);
	close(dest);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
}

/**
 * main - Funcion that check the number of argument
 * @argc: Check the number of argument
 * Return: 0
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

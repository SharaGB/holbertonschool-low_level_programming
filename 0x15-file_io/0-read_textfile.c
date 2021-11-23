#include "main.h"
/**
 * read_textfile - Reads a text file and prints in to the POSIX stdout
 * @filename: Check name file
 * @letters: Number of letters it should read and print
 * Return: Actual numbers of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t sz_rd, sz_wr;
	int fd = open(filename, O_RDONLY);
	char *buf = (char *)malloc(letters * sizeof(char));

	if (!buf)
	{
		free(buf);
		return (0);
	}
	sz_rd = read(fd, buf, letters);
	sz_wr = write(STDOUT_FILENO, buf, sz_rd);
	if (fd == '\0' || sz_rd == -1 || sz_wr == -1)
	{
		return (0);
	}
	free(buf);
	close(fd);

	return (sz_wr);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the opcodes of its own main function.
 * @argc: Number of command line arguments.
 * @argv: Array of arguments.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i = 0;
	int n_bytes = 0;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	while (i < n_bytes)
	{
		if (i == n_bytes - 1)
		{
			printf("%.2hhx\n", ptr[i]);
			break;
		}
		printf("%.2hhx ", ptr[i]);
		i++;
	}
	return (0);
}

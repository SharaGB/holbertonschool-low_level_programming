#include "main.h"
/**
 * main - Adds positive numbers
 * @argc: Check argc
 * @argv: Check of string
 * Return: 1 if error
 */
int main(int argc, char **argv)
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}

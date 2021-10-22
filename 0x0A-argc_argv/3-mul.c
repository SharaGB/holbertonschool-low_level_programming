#include "main.h"
/**
 * main - Multiplies two numbers
 * @argc: Check argc
 * @argv: Check of string
 * Return: 1 if error
 */
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%i\n", a * b);
	}
	return (0);
}

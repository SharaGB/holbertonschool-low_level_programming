#include "main.h"
#include <stdio.h>
/**
 * main - Prints prints all arguments it receives
 * @argc: Check argc
 * @argv: Check of string
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

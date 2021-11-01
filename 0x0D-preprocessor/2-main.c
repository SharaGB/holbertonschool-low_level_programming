#include <stdio.h>
/**
 * main - Prints the name of the file
 * Return: 0
 */
int main(void)
{
	char *name = __FILE__;

	printf("%s\n", name);
	return (0);
}

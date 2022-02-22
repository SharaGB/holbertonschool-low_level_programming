#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers
 * @n: Check
 *
 * Return: Void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 97; n++)
			printf("%i, ", n);
	}

	else
	{
		for (n = n; n > 98; n--)
			printf("%i, ", n);
	}
	printf("98\n");
}

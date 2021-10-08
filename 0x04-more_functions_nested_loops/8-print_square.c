#include "main.h"

/**
 * print_square - Prints a square
 *@size: Check
 *
 * Return: Void
 */
void print_square(int size)
{
	int r;
	int l;

	for (r = 0; r < size; r++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

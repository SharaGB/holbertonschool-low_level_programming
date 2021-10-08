#include "main.h"

/**
 * print_triangle - Prints a triangle
 *@size: Check
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int l;
	int e;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (e = l; e <= size - 1; e++)
			{
				_putchar(' ');
			}
			for (e = 1; e <= l; e++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}

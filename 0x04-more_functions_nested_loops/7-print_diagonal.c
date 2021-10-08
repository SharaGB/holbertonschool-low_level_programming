#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Check
 * Return: Void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				if (x == y)
				{
					_putchar(92);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}

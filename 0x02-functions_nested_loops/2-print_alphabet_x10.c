#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet
 *
 * Return: Always 0 <Success>
 */

void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}

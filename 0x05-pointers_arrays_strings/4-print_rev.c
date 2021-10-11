#include "main.h"

/**
 * print_rev - String in reverse
 * @s: Check the string
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int x = 0;
	int y = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	y = x - 1;
	while (s[y] != '\0')
	{
		_putchar(s[y]);
		y--;
	}
	_putchar('\n');
}

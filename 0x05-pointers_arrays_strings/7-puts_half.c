#include "main.h"

/**
 * puts_half - Half of a string
 * @str: Check str
 * Return: Always 0
 */
void puts_half(char *str)
{
	int x = 0;
	int n;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
	{
		n = x / 2;
	}
	else
	{
		n = (x - 1) / 2;
	}
	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');

}

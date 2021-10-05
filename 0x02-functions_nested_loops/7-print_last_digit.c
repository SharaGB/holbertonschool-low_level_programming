#include "main.h"

/**
 * print_last_digit - Absolute value
 * @x: Check
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	{
		x = -x;
	}
	_putchar(x + '0');
	return (x);
}

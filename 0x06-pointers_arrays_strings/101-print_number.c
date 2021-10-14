#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Number to print
 *
 *Return: Always 0
 */
void print_number(int n)
{
	unsigned int a, c, d, i, num, l, x, b;

	if (n < 0)
	{
		b = -1 * n;
		a = -1 * n;
	}
	else
	{
		b = n;
		a = n;
	}
	for (c = 1 ; b / 10 > 0 ; c++)
		b = b / 10;
	d = 1;
	for (i = c - 1 ; i > 0 ; i--)
		d = d * 10;
	if (n < 0)
		_putchar('-');
	for (x = c ; x >= 1 ; x--)
	{
		num = a / d;
		if (num >= 10)
		{
			l = num % 10;
			_putchar(l + '0');
		}
		else
			_putchar(num + '0');
		d = d / 10;
	}
}

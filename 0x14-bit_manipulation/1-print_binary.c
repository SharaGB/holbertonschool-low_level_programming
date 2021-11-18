#include "main.h"
/**
 * print_binary - Function that prints the binary number
 * @n: 
 */
void print_binary(unsigned long int n)
{
	unsigned long int bi;
	int i = 0;

	for (bi = n; (bi >>= 1) > 0; i++)
		;
	while (i >= 0)
	{
		if ((n >> i) & 1)
			_putchar('1');

		else
			_putchar('0');
		i--;
	}
}

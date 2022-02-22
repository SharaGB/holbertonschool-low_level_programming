#include <stdio.h>
/**
 * main - Program that finds and prints the largest
 * prime factor of the number 612852475143.
 *
 * Return: Prime number.
 */
int main(void)
{
	unsigned long int div = 2;
	unsigned long int number = 612852475143;

	while (div < (number / 2))
	{
		if (number % div != 0)
		{
			div += 1;
		}
		else
		{
			number /= div;
		}
	}
	printf("%lu\n", number);
	return (0);
}

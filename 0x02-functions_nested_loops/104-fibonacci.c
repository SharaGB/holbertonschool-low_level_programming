#include <stdio.h>
/**
 * main - Program that finds and prints the first 98 Fibonacci numbers
 *
 * Return: First 98 numbers.
 */
int main(void)
{
	unsigned long int i = 0;
	unsigned long int first = 0;
	unsigned long int second = 1;
	unsigned long int next = 0;

	for (i = 0; i < 98; i++)
	{
		next = (first + second) % 10000000000;
		first = second;
		second = next;
		if (i < 97)
		{
			printf("%ld, ", next);
		}
		else
		{
			printf("%ld\n", next);
		}
	}
	return (0);
}

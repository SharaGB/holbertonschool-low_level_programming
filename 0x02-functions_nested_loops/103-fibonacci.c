#include <stdio.h>
/**
 * main - Program that finds and prints the sum of the even-valued terms
 *
 * Return: Sum of Fibonacci.
 */
int main(void)
{
	unsigned int f1 = 0;
	unsigned int f2 = 1;
	unsigned int count = 0;
	unsigned int sum = 0;

	count = f1 + f2;
	while (count <= 4000000)
	{
		if (count % 2 == 0)
		{
			sum = sum + count;
		}
		f1 = f2;
		f2 = count;
		count = f1 + f2;
	}
	printf("%u\n", sum);
	return (0);
}

#include <stdio.h>
/**
 * main - Program that finds and prints the first 98 Fibonacci numbers
 *
 * Return: First 98 numbers.
 */
int main(void)
{
	int i = 0;
	unsigned long int n1 = 1, n2 = 2, n3 = 0;
	unsigned long int d1 = 0, d3 = 0, r1 = 0, r2 = 0;

	printf("%lu, ", n1);
	printf("%lu, ", n2);
	for (i = 3; i <= 98; i++)
	{
		if ((n1 + n2 > 10000000000) || r2 > 0 || r1 > 0)
		{
			d1 = (n1 + n2) / 10000000000;
			n3 = (n1 + n2) % 10000000000;
			d3 = r1 + r2 + d1;
			r1 = r2, r2 = d3;
			n1 = n2, n2 = n3;
			printf("%lu%010lu", r2, n2);
		}
		else
		{
			n3 = n1 + n2;
			printf("%lu", n3);
			n1 = n2;
			n2 = n3;
		}
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}

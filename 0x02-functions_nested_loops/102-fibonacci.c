#include <stdio.h>
/**
 * main - Program that prints the first 50 Fibonacci number.
 *
 * Return: First 50 Fibonacci numbers.
 */
int main(void)
{
	int i = 0;
	int n = 50;
	long int f1 = 1;
	long int f2 = 2;
	long int count = f1 + f2;

	printf("%li, %li, ", f1, f2);
	for (i = 3; i < n; i++)
	{
		printf("%li, ", count);
		f1 = f2;
		f2 = count;
		count = f1 + f2;
	}
	printf("%li\n", count);
	return (0);
}

#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: check a
 * @n: check n
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int x = 0;

	n = n - 1;
	while (n >= 0)
	{
		printf("%d", a[x]);
		n--;
		x++;
		if (n >= 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

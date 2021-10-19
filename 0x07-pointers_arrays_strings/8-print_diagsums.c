#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Sum of the two diagonals
 * @a: Check
 * @size: Check size
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int suma1 = 0, suma2 = 0;

	for (i = 0; i < size; i++)
	{
		suma1 += a[i];
		suma2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", suma1, suma2);
}

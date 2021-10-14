#include "main.h"

/**
 * reverse_array - Reverse a string.
 *@a: check the string
 *@n: check of elements
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int l;
	int x;
	int aux;

	for (l = 0, x = n - 1; l < x; l++, x--)
	{
		aux = a[l];
		a[l] = a[x];
		a[x] = aux;
	}
}

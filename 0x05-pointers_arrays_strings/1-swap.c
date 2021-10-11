#include "main.h"

/**
 * swap_int - Values of two integers
 *@a: Check the a
 *@b: check the b
 *
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

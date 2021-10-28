#include "main.h"
/**
 * *array_range - Creates an array of integers.
 * @min:Check
 * @max: Check max
 * Return: 0
*/
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	a = (int *)malloc(sizeof(*a) * (max - min + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}

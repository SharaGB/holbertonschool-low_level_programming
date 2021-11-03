#include "function_pointers.h"
/**
 * int_index - Function searches for an integer
 * @array: Check array
 * @size: size of the array
 * @cmp: Check cmp
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

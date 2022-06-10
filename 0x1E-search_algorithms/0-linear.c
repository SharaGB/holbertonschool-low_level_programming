#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search
 * Return: The first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] =[%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

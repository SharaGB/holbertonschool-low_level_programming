#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: Aointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t prev = 0;
	size_t step = 0;

	if (array == NULL)
		return (-1);
	 /* Finding the block where element */
	while (step < size && array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		/* Finding block size to be jumped */
		step += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	if (step > size - 1)
		step = size - 1;
	for (i = prev; i <= step; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/* If element is found */
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

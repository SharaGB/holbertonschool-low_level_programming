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
	/* Finding block size to be jumped */
	size_t step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (i < size && array[i] < value)
	{
		prev = i;
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		i = step + i;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
	if ((int)i > (size - 1))
		i = size - 1;
	while (prev <= i && array[prev] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}

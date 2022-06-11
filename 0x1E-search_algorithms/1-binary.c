#include "search_algos.h"
/**
 * search_array - Print the array to search
 *
 * @array: Pointer to the first element of the array to search
 * @low: Lowest positions
 * @high: Highest positions
 * Return: void
 */
void search_array(int *array, int low, int high)
{
	int i = 0;

	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search - Searches for a value in a sorted array of integersS
 *
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = 0, mid = 0;

	if (array == NULL)
		return (-1);
	high = size - 1;
	while (low < high)
	{
		printf("Searching in array: ");
		search_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

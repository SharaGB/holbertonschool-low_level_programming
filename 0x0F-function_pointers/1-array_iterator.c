#include "function_pointers.h"
/**
 * array_iterator - Executes a function
 * @array: Check array
 * @size: Size of the array
 * @action: Check pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

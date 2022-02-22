#include "main.h"
/**
 * _realloc - Function that reallocates a memory block using malloc and free
 * @ptr: Ppointer to the memory.
 * @old_size: The size.
 * @new_size: The new size.
 * Return: Contents will be copied to the newly allocated space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *src = ptr;
	unsigned int i = 0;
	char *new_ptr = NULL;
	unsigned int n = new_size;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		n = old_size;
	}
	while (i < n)
	{
		new_ptr[i] = src[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}

#include "main.h"
/**
 * *_calloc - Allocates memory for an array
 * @nmemb: Check number
 * @size: Check size
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ptr[n] = 0;
	}
	return (ptr);
}

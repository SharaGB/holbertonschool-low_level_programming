#include "main.h"
/**
 * *malloc_checked - Allocates memory ussing malloc
 * @b: Check allocation
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

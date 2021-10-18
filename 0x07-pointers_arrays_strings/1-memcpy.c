#include "main.h"

/**
 * *_memcpy - Copies memory area
 * @dest: Destination of the string
 * @src: Source of the string
 * @n: Number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

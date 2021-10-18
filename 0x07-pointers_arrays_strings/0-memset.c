#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: check of string
 * @b: check b
 * @n: check number of bytes
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

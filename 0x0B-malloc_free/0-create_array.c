#include "main.h"
/**
 * *create_array - Creates an array of chars
 * @size: Check
 * @c: Check c
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	while (n < size)
	{
		p[n] = c;
		n++;
	}
	return (p);
}

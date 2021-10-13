#include "main.h"

/**
 * *_strncpy - Copies the string pointed to by src
 * @dest: check dest
 * @src: chech src
 * @n: check
 *
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

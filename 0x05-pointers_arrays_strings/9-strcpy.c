#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src
 * @dest: check dest
 * @src: chech src
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (aux);
}

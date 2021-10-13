#include "main.h"

/**
 * *_strncat - Concatenates two strings
 * @dest: check the string dest
 * @src: check the sting src
 * @n: check
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int a;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[l] = src[a];
		a++;
		l++;
	}
	return (dest);
}

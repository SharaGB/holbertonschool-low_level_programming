#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: check the string dest
 * @src: check the sting src
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int l;
	int a;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[l] = src[a];
		a++;
		l++;
	}
	src[a] = '\0';
	return (dest);
}

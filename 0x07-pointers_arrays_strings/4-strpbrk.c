#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Check of string
 * @accept: Number of bytes
 * Return: Pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}

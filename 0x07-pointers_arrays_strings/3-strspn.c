#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Check string
 * @accept: Check bytes
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != s[i]; x++)
		{
			if (accept[x] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}

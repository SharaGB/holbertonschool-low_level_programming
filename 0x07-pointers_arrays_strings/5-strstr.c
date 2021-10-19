#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: Check string
 * @needle: Check substring
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*haystack && *b && *haystack == *b)
		{
			haystack++;
			b++;
		}

		if (!*b)
		{
			return (a);
		}
		haystack = a + 1;
	}
	return ('\0');
}

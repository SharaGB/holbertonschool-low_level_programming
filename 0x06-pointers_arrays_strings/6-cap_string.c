#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 *@s: check a string
 *
 * Return: Always 0
 */
char *cap_string(char *s)
{
	int i;
	int n;
	char a[] = {',', ';', '.', '!', '?', '"', '(', ')',
		    '{', '}', ' ', '\t', '\n'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; a[n] != '\0'; n++)
		{
			if (s[0] >= 'a' && s[0] <= 'z')
			{
				s[0] = s[0] - 32;
			}
			if (s[i] == a[n] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}

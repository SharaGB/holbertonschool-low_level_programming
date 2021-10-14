#include "main.h"

/**
 * *rot13 - Encodes a string using rot13
 *@str: check
 *
 * Return: Always 0
 */
char *rot13(char *str)
{
	int i;
	int off;

	for (i = 0; str && str[i] != '\0'; i++)
	{
		if (str[i] < 'a' || str[i] > 'z')
			continue;
		for (off = 13; off > ('z' - str[i]); )
		{
			off - = (1 + 'z' - str[i]);
			str[i] = 'a';
		}
		str[i] + = off;
	}
	return (str);
}

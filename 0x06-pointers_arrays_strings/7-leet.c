#include "main.h"

/**
 * *leet - Encodes a string into 1337
 *@src: check the string
 *
 * Return: Always 0
 */
char *leet(char *src)
{
	char *str1 = "aAeEoOtTlL";
	char *str2 = "4433007711";
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (src[i] == str1[j])
			{
				src[i] = str2[j];
			}
		}
	}
	return (src);
}

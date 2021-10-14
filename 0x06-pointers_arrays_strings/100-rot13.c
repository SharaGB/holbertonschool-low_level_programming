#include "main.h"

/**
 * *rot13 - Encodes a string using rot13
 *@str: check the string
 *
 * Return: Always 0
 */
char *rot13(char *str)
{
	char *str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *str2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
				break;
			}
		}
	}
	return (str);
}

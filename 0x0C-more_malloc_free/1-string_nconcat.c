#include "main.h"
/**
 * *string_nconcat - Concatenate two string.
 * @s1: Check string 1
 * @s2: Check string 2
 * @n: Check
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	len1 = _strlen(s1);
	if (s2 == NULL)
	{
		s2 = "";
	}
	len2 = _strlen(s2);
	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i + j] = s2[j];
	}
	if (n >= len2)
	{
		str = (char *)malloc((len1 + n + 1) * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
	}
	for (j = 0; j != '\0'; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = s2[j];
	return (str);
}

/**
 * _strlen - The length of a string
 * @s: Check the string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}
	return (leng);
}
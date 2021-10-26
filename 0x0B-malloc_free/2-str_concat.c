#include "main.h"
/**
 * str_concat - Concatenate two string.
 * @s1: Check string 1
 * @s2: Check string 2
 * Return: Best School
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1, len2, i, j;

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
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
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

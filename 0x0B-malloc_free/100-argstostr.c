#include "main.h"
/**
 * *argstostr - Concatenate two string.
 * @ac: Check ac
 * @av: Check arguments
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}

	str = malloc((len + ac) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		_strncat(str, av[i]);
		_strncat(str, "\n");
	}
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
		leng++;
	return (leng);
}

/**
 * *_strncat - Concatenates two strings
 * @dest: check the string dest
 * @src: check the sting src
 * Return: dest.
 */

char *_strncat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

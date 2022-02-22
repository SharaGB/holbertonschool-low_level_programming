#include "main.h"
/**
 * wildcmp - Function that compares two strings
 * @s1: String to compare.
 * @s2: Contain the special character *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}

	if (*s1 == '\0')
	{
		if (*s2 == '*' && *(s2 + 1) == '\0')
			return (1);
		if (*s1 == *s2)
			return (1);
		else
			return (0);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (*s1 == *(s2 + 1))
		{
			if ((wildcmp(s1, s2 + 1)) == 1)
				return (1);
		}
		return (wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

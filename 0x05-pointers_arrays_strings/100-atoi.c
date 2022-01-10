#include "main.h"
#include <limits.h>
/**
 * _atoi - Function void atoi
 * @s: Check string
 * Return: Always 0
 */
int _atoi(char *s)
{
	int len = 0;
	int n = 0;
	int count = 0;
	int res = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (count < len)
	{
		if (s[count] == '-')
		{
			n++;
		}
		if (s[count] >= 48 && s[count] <= 57)
		{
			/* ascii values for numbers */
			for (; s[count] >= 48 && s[count] <= 57; count++)
			{
				res = (10 * res - (s[count] - 48));
			}
			break;
		}
		count++;
	}
	if (n % 2 != 0)
	{
		return (res);
	}
	else
	{
		return (-res);
	}
}

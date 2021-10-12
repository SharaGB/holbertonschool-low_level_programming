#include "main.h"

/**
 * rev_string - Reverse a string.
 *@s: check
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int leng = 0;
	int x = 0;
	char aux;

	while (s[leng] != '\0')
	{
		leng++;
	}
	leng = leng - 1;
	while (x < leng)
	{
		aux = s[leng];
		s[leng] = s[x];
		s[x] = aux;
		x++;
		leng--;
	}
}

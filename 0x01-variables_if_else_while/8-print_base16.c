#include <stdio.h>

/**
 * main - Base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y;
	char x;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

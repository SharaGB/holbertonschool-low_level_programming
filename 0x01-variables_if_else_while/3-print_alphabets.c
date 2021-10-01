#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char x;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

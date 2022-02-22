#include <stdio.h>
/**
* main - Prints all possible combinations
*
* Return: 0
*/
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

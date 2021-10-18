#include "main.h"
/**
 * print_chessboard -  Prints
 * @a: Check of a
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[i][x]);
		}
		_putchar('\n');
	}
}

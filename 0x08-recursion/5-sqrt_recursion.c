#include "main.h"
/**
 * root - Natural square root of a number
 * @n: check square root of n
 * @i: Check a number aux
 * Return: The natural square root of a number
 */
int root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (root(n, i + 1));
}

/**
 * _sqrt_recursion - Natural square root of a number
 * @n: check square root of n
 * Return: The natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}

#include "main.h"
/**
 * prime_number - Prints a prime number
 * @n: check n
 * @i: Check a number aux
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int prime_number(int n, int i)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, (i + 1)));
	}
}

/**
 * is_prime_number - Prints a prime number
 * @n: check n
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}

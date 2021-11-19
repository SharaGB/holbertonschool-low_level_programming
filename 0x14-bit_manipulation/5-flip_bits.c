#include "main.h"
/**
  * flip_bits - Function that return the number of bits
  * @n: Check number
  * @m: Check m
  * Return: The number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	n ^= m;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

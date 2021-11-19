#include "main.h"
/**
  * clear_bit - Function that sets the value of a bit
  * @n: Check number
  * @index: Check index
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n &= ~(1UL << index) & *n;
		return (1);
	}
	return (-1);
}

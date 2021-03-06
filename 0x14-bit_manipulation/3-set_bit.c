#include "main.h"
/**
  * set_bit - Function that return the value of a bit
  * @n: Check number
  * @index: Check index
  * Return: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = (1UL << index) | *n;
		return (1);
	}
	return (-1);
}

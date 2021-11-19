#include "main.h"
/**
  * get_bit - Function that return the value of a bit
  * @n: Check number
  * @index: Check index
  * Return: Value of the bit at index index or -1 if an error occured
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 01;

	if (index < 64)
	{
		*n = (*n & ~(1UL << index)) | (x << index);
		return (1);
	}
	return (-1);
}

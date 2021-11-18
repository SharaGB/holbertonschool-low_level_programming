#include "main.h"
/**
  * get_bit - Function that return the value of a bit
  * @n: Check number
  * @index: Check index
  * Return: Value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n & (1 << index))
		return (1);
	else
		return (0);
}

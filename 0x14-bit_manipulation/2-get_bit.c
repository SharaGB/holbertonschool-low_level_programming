#include "main.h"
/**
  * get_bit - bit at a given index.
  * @n: number
  * @index: index.
  * Return: value of the bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
		return (1);
	else
		return (0);
}
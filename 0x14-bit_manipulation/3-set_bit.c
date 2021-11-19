#include "main.h"
/**
  * set_bit - sets the value of a bit
  * @n: pointer.
  * @index: index.
  * Return: the value
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

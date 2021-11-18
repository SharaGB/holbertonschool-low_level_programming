#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Binary number
 * Return: Converted number, or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec <<= 1;

		if (b[i] == '1')
			dec += 1;
		i++;
	}
	return (dec);
}

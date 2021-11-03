#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 * @name: Check
 * @f: Check pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}

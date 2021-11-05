#include "variadic_functions.h"
/**
 * print_numbers - Function that print number
 * @separator: String to be printed
 * @n: Number of integers
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		j += va_arg(ap, int);

		if (separator != NULL)
		{
			printf("%d%s", j, separator);
		}
		if (i == n - 1)
		{
			printf("%d", j);
		}
	}
	va_end(ap);

	printf("\n");
}

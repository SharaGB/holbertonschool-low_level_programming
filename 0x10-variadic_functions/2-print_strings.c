#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings
 * @separator: Check separator
 * @n: Check n
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		if (i <= n - 1)
		{
			printf("%s", str);
		}
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ap);

	printf("\n");
}

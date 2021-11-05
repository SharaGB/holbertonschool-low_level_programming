#include "variadic_functions.h"
/**
 * format_char - Prints a character
 * @c: List c
 */
void format_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * format_int - Prints a integer
 * @i: List i
 */
void format_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * format_float - Prints a float
 * @f: List f
 */
void format_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * format_char_p - Prints a string
 * @s: List s
 */
void format_char_p(va_list s)
{
	char *str = va_arg(s, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed
 */
void print_all(const char *const format, ...)
{
	va_list ap;

	format_t print[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_char_p},
		{NULL, NULL}};

	int i = 0, j;
	char *strn = "";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (print[j].name)
		{
			if (format[i] == *print[j].name)
			{
				printf("%s", strn);
				print[j].f(ap);
				strn = ", ";
				break;
			}
			j += 1;
		}
		i += 1;
	}
	va_end(ap);

	printf("\n");
}

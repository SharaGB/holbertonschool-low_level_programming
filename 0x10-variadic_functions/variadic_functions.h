#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * format - List of types of arguments
 * @op: The operator
 * @f: The function associated
 */
typedef struct format
{
	char *name;
	void (*f)(va_list);
} format_t;

void format_char(va_list);
void format_int(va_list);
void format_float(va_list);
void format_char_p(va_list);

#endif

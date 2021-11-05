#include "variadic_functions.h"
/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed
 */
void print_all(const char * const format, ...)
{
    va_list ap;

    int i;
    float f;
    char *s;

    va_start(ap, format);

    if (*p != '%')
    {
        putchar(*p);
        continue;
    }

    switch (*++p)
    {
        case 'c':
        {
            printf("%c", (char) va_arg(ap, int));
            break;
        }
        case 'i':
        {
            printf("%d", va_arg(ap, int));
            break;
        }
        case 'f':
        {
            printf("%f", va_arg(ap, double));
            break;
        }
        case 's':
        {
            s = va_arg(ap, char*);
            if (s)
            {
                printf("%s", s);
                break;
            }
            printf("(nil)");
        }
        break;
    }
    if ((format[i] == 'c' || format[i] == 'f' || format[i] == 's' ||
		format[i] == 'i') && format[i + 1])
			printf(", ");
		i++;
	}
	break;
	}
	va_end(list);
	printf("\n");
}
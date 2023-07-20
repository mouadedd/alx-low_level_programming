#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all
 * @format: list
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *a = "";
	char *b = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", b, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", b, va_arg(l, double));
					break;
				case 's':
					a = va_arg(l, char *);
					if (!a)
						a = "(nil)";
					printf("%s%s", b, a);
					break;
				default:
					i++;
					continue;
			}
			b = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(l);
}

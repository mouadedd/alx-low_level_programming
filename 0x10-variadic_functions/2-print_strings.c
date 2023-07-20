#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - strings + new line
 * @separator: The string separating  strings
 * @n: n of string in the function
 * @...: A variable of n string to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sl;
	char *str;
	unsigned int i;

	va_start(sl, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(sl, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(sl);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum
 * @n: number of paramters in the function
 * @...: paramters to sum
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	unsigned int sum = 0;

	va_start(vl, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(vl, int);

	va_end(vl);

	return (sum);
}

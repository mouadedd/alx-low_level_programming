#include "main.h"

/**
 * factorial - returns a number's factorial
 * @n: number to do factorial with
 *
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

#include "main.h"

/**
 * print_sign - input
 * @n: the integer to check
 * Return: 1 if +
 * -1 if -
 * 0 if null
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('+');
	}
		return (1);
}

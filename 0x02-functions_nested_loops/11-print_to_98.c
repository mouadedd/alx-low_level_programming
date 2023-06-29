#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints 98
 *@n: n is the integr
 * Return: result
 */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else
				printf("%d\n", a);
		}
	} else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else
				printf("%d\n", b);
		}
	}
}


#include "main.h"

/**
 * print_binary - decimal number equivalent in binary
 * @n: the binary number
 */
void print_binary(unsigned long int n)
{
	int h;
	int c = 0;
	unsigned long int crnt;

	for (h = 63; h >= 0; h--)
	{
		crnt = n >> h;
		if (crnt & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

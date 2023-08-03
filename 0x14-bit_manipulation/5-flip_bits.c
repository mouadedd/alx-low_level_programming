#include "main.h"

/**
 * flip_bits - number of bitd to change
 * @n: number 1
 * @m: number 2
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h;
	int c = 0;
	unsigned long int crnt;
	unsigned long int e = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		crnt = e >> h;
		if (crnt & 1)
			c++;
	}
	return (c);
}

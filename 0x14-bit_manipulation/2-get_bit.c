#include "main.h"

/**
 * get_bit - index to the value  in bit of a decimal number
 * @n: the number
 * @index: index
 * Return: bit’s value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bval;

	if (index > 63)
		return (-1);
	bval = (n >> index) & 1;
	return (bval);
}

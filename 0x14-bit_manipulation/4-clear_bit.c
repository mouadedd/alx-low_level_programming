#include "main.h"

/**
 * clear_bit - set value of bit to 0
 * @n: pointer
 * @index: index
 * Return: 1 (success) or -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
		return (1);
}

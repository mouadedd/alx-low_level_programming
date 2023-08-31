#include "main.h"

/**
 * binary_to_uint - convert binary num to unsigned int
 * @b: binary number (a string)
 * Return: the conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int dval = 0;

	if (!b)
		return (0);

	for (h = 0; b[h]; h++)
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		dval = 2 * dval + (b[h] - '0');
	}

	return (dval);
}

#include "main.h"

/**
 * get_endianness - check if bigg or little
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
	unsigned int h = 1;
	char *p = (char *) &h;

	return (*p);
}

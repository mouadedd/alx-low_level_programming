#include "main.h"
/**
 * swap_int - swaps values
 * @a: int 1
 * @b: int 2
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

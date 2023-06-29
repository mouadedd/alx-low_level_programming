#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 * return: 0 succeded
 */
void print_rev(char *s)
{
	int li = 0;
	int a;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	s--;
	for (a = li; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

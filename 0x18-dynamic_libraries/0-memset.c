#include "main.h"
/**
 * _memset - memory value
 * @s: starting address
 * @b: desired value
 * @n: number of bytes to change
 *
 * Return: value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

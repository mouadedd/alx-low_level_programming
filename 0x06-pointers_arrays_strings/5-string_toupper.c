#include "main.h"
/**
 * string_toupper - lowercase to uppercase
 * @n: pointer
 *
 * Return: c
 */
char *string_toupper(char *c)
{
	int a;

	a = 0;
	while (c[a] != '\0')
	{
		if (c[a] >= 'a' && c[a] <= 'z')
			c[a] = c[a] - 32;
		a++;
	}
	return (c);
}

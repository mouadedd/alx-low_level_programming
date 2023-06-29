#include "main.h"
/**
 * puts2 - one character
 * @str: input
 * Return: str
 */
void puts2(char *str)
{
	int li = 0;
	int a = 0;
	char *n = str;
	int b;

	while (*n != '\0')
	{
		n++;
		li++;
	}
	a = li - 1;
	for (b = 0 ; b <= a ; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}

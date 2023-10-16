#include "main.h"
/**
 * _puts - string + new line
 * @str: str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

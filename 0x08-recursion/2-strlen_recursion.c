#include "main.h"
/**
 * _strlen_recursion - Returns string's length
 * @s: string to measur
 *
 * Return: string's length
 */
int _strlen_recursion(char *s)
{
	int sl = 0;

	if (*s)
	{
		sl++;
		sl += _strlen_recursion(s + 1);
	}

	return (sl);
}

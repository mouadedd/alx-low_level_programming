#include "main.h"
/**
 * puts_half - seconf half of a string
 * @n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int n, j, li;

	li = 0;

	for (j = 0; str[j] != '\0'; j++)
		li++;

	n = (li / 2);

	if ((li % 2) == 1)
		n = ((li + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}

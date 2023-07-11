#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate
 * @str: char
 * Return: nothing
 */
char *_strdup(char *str)
{
	char *c;
	int a;
	int b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	c = malloc(sizeof(char) * (a + 1));

	if (c == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		c[b] = str[b];

	return (c);
}

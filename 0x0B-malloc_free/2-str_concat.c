#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: input 1
 * @s2: input 2
 * Return: concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *cn;
	int i;
	int c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	cn = malloc(sizeof(char) * (c + i + 1));

	if (cn == NULL)
	return (NULL);
	i = c = 0;
	while (s1[i] != '\0')
	{
		cn[i] = s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		cn[i] = s2[c];
		i++, c++;
	}
	cn[i] = '\0';
	return (cn);
}

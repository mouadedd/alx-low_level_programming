#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size of array
 * @c: char to assign
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int u;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (u = 0; u < size; u++)
		s[u] = c;
	return (s);
}

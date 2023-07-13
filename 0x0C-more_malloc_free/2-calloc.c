#include <stdlib.h>
#include "main.h"

/**
 * *_memp - put constant in a memory
 * @s: memory place
 * @b: character to copy
 * @n: number of b's copy
 * Return: pointer to the memory place
 */
char *_memp(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: size of the element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memp(ptr, 0, nmemb * size);

	return (ptr);
}

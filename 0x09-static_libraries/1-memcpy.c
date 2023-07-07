#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: where memory is stored
 *@src: where memory is copied
 *@n: n of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = n;
	int b = 0;

	for (; b < a; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}

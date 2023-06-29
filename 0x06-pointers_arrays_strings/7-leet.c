#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @c: input 1
 * Return: value
 */
char *leet(char *c)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (c[a] == s1[b])
			{
				c[a] = s2[b];
			}
		}
	}
	return (c);
}

#include "main.h"
/**
 * _strlen - strings length
 * @s: str
 * Return: li
 */
int _strlen(char *s)
{
	int li = 0;

	while (*s != '\0')
	{
		li++;
		s++;
	}

	return (li);
}

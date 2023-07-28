#include"main.h"
/**
 * wildcmp - Compare  a set of strings
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	return (0);
}

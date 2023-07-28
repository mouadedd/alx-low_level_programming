#include "main.h"
/**
 * see_if_pal - look for palindrome
 * @s: string
 * @h: checker
 * @sl: string's length
 * Return: 1 if true else 0
 */
int see_if_pal(char *s, int h, int ls)
{
	if (*(s + h) != *(s + ls - 1))
		return (0);
	if (h >= ls)
		return (1);
	return (see_if_pal(s, h + 1, ls - 1));
}

/**
 * _str_rec - length of a string
 * @s: string
 * Return: ls
 */
int _str_rec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _str_rec(s + 1));
}


/**
 * is_palindrome - make sure is apalindrome
 * @s: string
 * Return: 1 true else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (see_if_pal(s, 0, _str_rec(s)));
}

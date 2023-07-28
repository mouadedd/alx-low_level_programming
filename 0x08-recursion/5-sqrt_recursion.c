#include "main.h"

/**
 * ac_sqrt_rec - actual square recursion
 * @n: the number
 * @h: to iterat
 * Return: result of square root
 */
int ac_sqrt_rec(int n, int h)
{
	if (h * h == n)
		return (h);
	if (h * h > n)
		return (-1);
	return (ac_sqrt_rec(n, h + 1));
}

/**
 * _sqrt_recursion - ret natural square root of number
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (ac_sqrt_rec(n, 0));
}

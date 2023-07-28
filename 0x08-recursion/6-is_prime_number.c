#include "main.h"
/**
 * its_prime - check the primety recursively
 * @n: the number
 * @h: the checker
 * Return: 1 if true else 0
 */
int its_prime(int n, int h)
{
	if (h == 1)
		return (1);
	if (n % h == 0 && h > 0)
		return (0);
	return (its_prime(n, h - 1));
}

/**
 * is_prime_number - chack if it is aprime number
 * @n: the number
 * Return: 1 if true else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (its_prime(n, n - 1));
}

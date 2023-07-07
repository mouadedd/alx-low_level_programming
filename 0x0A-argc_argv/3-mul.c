#include <stdio.h>
#include "main.h"

/**
 * _conv - converts a string to an integer
 * @s: string to be convert
 * Return: the int converted from the string
 */
int _conv(char *s)
{
	int a, b, n, c, d, l;

	a = 0;
	b = 0;
	n = 0;
	c = 0;
	d = 0;
	l = 0;

	while (s[l] != '\0')
		l++;

	while (a < l && c == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			d = s[a] - '0';
			if (b % 2)
				d = -d;
			n = n * 10 + d;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}

	if (c == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 succes, 1 Error
 */
int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _conv(argv[1]);
	n2 = _conv(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}

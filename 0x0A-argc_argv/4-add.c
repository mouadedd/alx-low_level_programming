#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * l_for_d - look for digit
 * @s: array
 * Return: 0
 */
int l_for_d(char *s)
{
	unsigned int cnt;

	cnt = 0;
	while (cnt < strlen(s))
	{
		if (!isdigit(s[cnt]))
		{
			return (0);
		}

		cnt++;
	}
	return (1);
}
/**
 * main - program adds positive numbers
 * @argc: n arguments
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int total = 0;
	int cnt;
	int s_to_i;

	cnt = 1;
	while (cnt < argc)
	{
		if (l_for_d(argv[cnt]))

		{
			s_to_i = atoi(argv[cnt]);
			total = total + s_to_i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		cnt++;
	}
	printf("%d\n", total);
	return (0);
}

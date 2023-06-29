#include <stdio.h>
/**
 * main - input
 * Return: 0
 */
int main(void)
{
	int a, w;

	for (a = 0 ; a <= 8 ; a++)
	{
		for (w = 1; w <= 9; w++)
		{
			if (w > a)
			{
				if (a != 8 || w != 9)
				{
					printf("%d%d, ", a, w);
				}
			}
		}
	}
	printf("\n");
	return (0);
}

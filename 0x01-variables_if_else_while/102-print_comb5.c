#include <stdio.h>
/**
 * main - input
 * Return: 0
 */
int main(void)
{
	 int a, w, l;

	for (a = 48; a < 58; a++)
	{
		for (w = 49; w < 58; w++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > w && w > a)
				{
					putchar(a);
					putchar(w);
					putchar(l);
					if (a != 7 || w != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
putchar('\n');
return (0);
}

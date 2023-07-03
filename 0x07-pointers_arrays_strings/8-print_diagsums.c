#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sm1, sm2, z;

	sm1 = 0;
	sm2 = 0;

	for (z = size - 1; z >= 0; z--)
	{
		sm2 += a[z * size + (size - z - 1)];
	}
	for (z = 0; z < size; z++)
	{
		sm1 = sm1 + a[z * size + z];
	}

	printf("%d, %d\n", sm1, sm2);
}

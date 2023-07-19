#include "function_pointers.h"
/**
 * int_index - return index place if true, else ret -1
 * @array: array
 * @size: elements of array
 * @cmp: pointer to func to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

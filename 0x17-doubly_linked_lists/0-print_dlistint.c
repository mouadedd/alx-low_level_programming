#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint-prints all elements of a list
 *@h: pointer to the list
 *Return: n element of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (c);
}

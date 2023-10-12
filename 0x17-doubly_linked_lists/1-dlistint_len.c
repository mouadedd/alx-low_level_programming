#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len-prints n element in list
 *@h: pointer to list
 *Return: n element of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
		h = (*h).next;
	return (c);
}

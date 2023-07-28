#include <stdio.h>
#include "lists.h"

/**
 * print_list - display elements of a linked list
 * @h: pointe list to print
 * Return: n of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!(*h).str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		s++;
	}
	return (s);
}

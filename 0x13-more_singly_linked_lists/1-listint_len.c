#include "lists.h"
/**
 * listint_len - n elements in linked lists
 * @h: linked list
 * Return: n nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		nm++;
		h = (*h).next;
	}

	return (nm);
}

#include "lists.h"
/**
 *get_dnodeint_at_index- returns the nth node of a list.
 *@head: pointer to list
 *@index: index to the wanted node
 *Return: pointer to indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (cnt < index)
	{
		if (head == NULL)
			return (NULL);
		cnt++;
		head  = (*head).next;
	}
	return (head);
}

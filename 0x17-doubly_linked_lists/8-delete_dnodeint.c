#include <stdlib.h>
#include "lists.h"
/**
 *delete_dnodeint_at_index- deletes inexed node
 *@head: pointer to ptr to list
 *@index:node to delete
 *Return: 1 if succeeded, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int p;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*current).next;
		if ((*current).next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (p = 0; p < index; p++)
	{
		if ((*current).next == NULL)
			return (-1);
		current = (*current).next;
	}
	current->prev->next = (*current).next;
	if ((*current).next != NULL)
		current->next->prev = (*current).prev;
	free(current);
	return (1);
}

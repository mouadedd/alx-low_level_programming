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
	dlistint_t *temp;
	unsigned int position;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	position = 0;
	if (index == 0)
	{
		*head = (*head)->next;
	}
	else
	{
		while (position < (index - 1))
		{
			if (current == NULL)
				return (-1);
			current = (*current).next;
			position++;
		}
		temp = current;
		current =(*current).next;
		(*temp).next = current == NULL ? NULL : (*current).next;	}
	free(current);
	return (1);
}

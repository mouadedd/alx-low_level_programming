#include "lists.h"

/**
 * delete_nodeint_at_index - delete indexed node
 * @head: pointer
 * @index: index
 * Return: 1 if succeded or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *curnt = NULL;
	unsigned int u = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*(*head)).next;
		free(t);
		return (1);
	}
	while (u < index - 1)
	{
		if (!t || !((*t).next))
			return (-1);
		t = (*t).next;
		u++;
	}

	curnt = (*t).next;
	(*t).next = (*curnt).next;
	free(curnt);

	return (1);
}

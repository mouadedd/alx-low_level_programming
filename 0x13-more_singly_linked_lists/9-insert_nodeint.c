#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in a position in the list
 * @head: pointer
 * @idx: index
 * @n: data to insert
 * Return: NULL or pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int u;
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (idx == 0)
	{
		(*new).next = *head;
		*head = new;
		return (new);
	}
	for (u = 0; t && u < idx; u++)
	{
		if (u == idx - 1)
		{
			(*new).next = (*t).next;
			(*t).next = new;
			return (new);
		}
		else
			t = (*t).next;
	}
	return (NULL);
}

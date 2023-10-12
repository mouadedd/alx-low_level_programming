#include "lists.h"
/**
 *insert_dnodeint_at_index- inserts node at a position.
 *@h: pointer to ptr to list
 *@idx: index of the node
 *@n: the integer to the new node
 *Return: address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new_node;
	dlistint_t *traverse;
	unsigned int position;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	(*new_node).n = n;
	if (idx == 0)
	{
		(*new_node).next = *h;
		(*new_node).prev = NULL;
		if ((*new_node).next != NULL)
			new_node->next->prev = new_node;
		*h = new_node;
	}
	else
	{
		traverse = *h;
		for (position = 0; traverse != NULL && position < (idx - 1); position++)
			traverse = (*traverse).next;
		if (traverse == NULL)
		{
			free(new_node);
			return (NULL);
		}
		(*new_node).next = (*traverse).next;
		(*new_node).prev = traverse;
		if ((*traverse).next != NULL)
			traverse->next->prev = new_node;
		(*traverse).next = new_node;
	}
	return (new_node);
}

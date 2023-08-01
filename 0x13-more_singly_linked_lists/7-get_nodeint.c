#include "lists.h"
/**
 * get_nodeint_at_index - returns node
 * @head: node 0
 * @index: node’s index
 * Return: NULL or pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int u = 0;
	listint_t *t = head;

	while (t && u < index)
	{
		t = (*t).next;
		u++;
	}
	return (t ? t : NULL);
}

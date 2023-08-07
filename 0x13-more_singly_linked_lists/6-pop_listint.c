#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: pointer 0 in the list
 * Return: data of the node or 0 if its empty
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int nm;

	if (!head || !*head)
		return (0);

	nm = (*(*head)).n;
	t = (*(*head)).next;
	free(*head);
	*head = t;
	return (nm);
}

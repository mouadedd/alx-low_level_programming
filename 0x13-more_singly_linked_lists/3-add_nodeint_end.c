#include "lists.h"

/**
 * add_nodeint_end - add a node in the end
 * @head: pointer to node 0 of list
 * @n: data of new node
 * Return: NULL or pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while ((*t).next)
		t = (*t).next;
	(*t).next = new;
	return (new);
}

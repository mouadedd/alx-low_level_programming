#include "lists.h"

/**
 * add_nodeint - add a node in the beginning
 * @head: pointer to the node 0 of list
 * @n: data of new node
 * Return: NULL or pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = *head;
	*head = new;
		return (new);
}

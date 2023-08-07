#include "lists.h"
/**
 * reverse_listint - reverses list
 * @head: pointer to 0 in original list
 * Return: pointer to 0 in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*(*head)).next;
		(*(*head)).next = pr;
		pr = *head;
		*head = next;
	}
	*head = pr;
	return (*head);
}

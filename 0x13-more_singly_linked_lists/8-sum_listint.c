#include "lists.h"

/**
 * sum_listint - sum of all data
 * @head: node 0 of linked list
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t)
	{
		sum = sum + (*t).n;
		t = (*t).next;
	}
	return (sum);
}

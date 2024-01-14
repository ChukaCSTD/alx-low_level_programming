#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all nodes
 * @head: pointer to head
 * Return: returns the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *j = head;
	int k = 0;

	if (head == NULL)
		return (0);

	while (j != NULL)
	{
		k = k + j->n;
		j = j->next;
	}
	return (k);
}

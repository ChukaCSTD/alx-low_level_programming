#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete a node at index position
 * of a linked list
 * @head: pointer to head in function
 * @index: index or position to be added
 * Return: 1 success -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a;
	unsigned int node;

	if (head == NULL || *head == NULL)
		return (-1);
	a = *head;

	for (node = 0; a != NULL && node < index; node++)
		a = a->next;
	if (a == NULL)
		return (-1);
	if (*head == a)
		*head = a->next;
	if (a->next != NULL)
		a->next->prev = a->prev;
	if (a->prev != NULL)
		a->prev->next = a->next;
	free(a);
	return (1);
}

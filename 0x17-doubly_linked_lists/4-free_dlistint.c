#include "lists.h"
/**
 * free_dlistint - function that frees alist.
 * @head: pointer to head in fucntion
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}

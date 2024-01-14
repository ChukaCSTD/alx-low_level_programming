#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list.
 * @head: current head address
 * @n: number to fill the node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = node;

	*head = node;
	return (node);
}

#include "lists.h"
/**
 * add_node - adds a new node at the beginning of the list
 * By Chuka Ozoadibe
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *all;
	size_t i;

	all = malloc(sizeof(list_t));
	if (all == NULL)
		return (NULL);

	all->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	all->len = i;
	all->next = *head;
	*head = all;

	return (*head);
}

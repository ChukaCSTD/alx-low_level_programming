#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * By Chuka Ozoadibe
 * @head: head of the linked list.
 * @str: string to store list elements.
 *
 * Return: pointer address of the new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *all, *temp;
	size_t j;

	all = malloc(sizeof(list_t));
	if (all == NULL)
		return (NULL);

	all->str = strdup(str);

	for (j = 0; str[j]; j++)
		;

	all->len = j;
	all->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = all;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = all;
	}

	return (*head);
}

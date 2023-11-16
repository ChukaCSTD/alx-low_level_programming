#include "lists.h"

/**
 * free_list - frees a list_t list
 * By Chuka Ozoadibe
 * @head: head of the linked list.
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *taj;

	while ((taj = head) != NULL)
	{
		head = head->next;
		free(taj->str);
		free(taj);
	}
}

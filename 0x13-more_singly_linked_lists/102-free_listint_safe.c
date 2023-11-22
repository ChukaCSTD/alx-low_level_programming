#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t dist = 0;
	int neg;
	listint_t *mpt;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		neg = *h - (*h)->next;
		if (neg > 0)
		{
			mpt = (*h)->next;
			free(*h);
			*h = mpt;
			dist++;
		}
		else
		{
			free(*h);
			*h = NULL;
			dist++;
			break;
		}
	}
	*h = NULL;
	return (dist);
}

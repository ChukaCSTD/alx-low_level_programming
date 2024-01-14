#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *top;
	unsigned int i;

	node = NULL;
	if (idx == 0)
		node = add_dnodeint(h, n);
	else
	{
		top = *h;
		i = 1;
		if (top != NULL)
			while (top->prev != NULL)
				top = top->prev;
		while (top != NULL)
		{
			if (i == idx)
			{
				if (top->next == NULL)
					node = add_dnodeint_end(h, n);
				else
				{
					node = malloc(sizeof(dlistint_t));
					if (node != NULL)
					{
						node->n = n;
						node->next = top->next;
						node->prev = top;
						top->next->prev = node;
						top->next = node;
					}
				}
				break;
			}
			top = top->next;
			i++;
		}
	}

	return (node);
}

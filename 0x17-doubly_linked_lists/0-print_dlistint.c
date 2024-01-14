#include "lists.h"

/**
 * print_dlistint -function that prints all the elements of a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *j;

	if (h == NULL)
		return (0);
	j = h;

	for (i = 0; j != NULL; i++)
	{
		printf("%d\n", j->n);
		j = j->next;
	}
	return (i);
}

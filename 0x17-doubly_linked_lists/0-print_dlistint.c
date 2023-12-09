#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list
 *
 * @h: head of list
 * @Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int copy;

	copy = 0;

	if (h == NULL)
		return (copy);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		copy++;
		h = h->next;
	}
	return (copy);
}

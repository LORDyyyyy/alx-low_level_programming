#include "lists.h"

/**
 * print_dlistint - prints a dlistint_t list
 * @h: head of the list
 *
 * Return: number of  nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}

#include "lists.h"

/**
 * print_list - prints the data from a singly linked list
 * @h: head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("[%u] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		count++;
		h = h->next;
	}
	return (count);
}

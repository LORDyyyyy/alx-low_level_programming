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

	while (p)
	{
		printf("[%u] %s\n", p->str ? p->len : 0, p->str ? p->str : "(nil)");
		count++;
		p = p->next;
	}
	return (count);
}
